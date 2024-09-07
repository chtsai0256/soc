# SOC_from_2023

#### 安装教程

1. crossed complie(Gcc)
> gcc 將在以後設計 riscv core時用來 compile 測試的程式檔。
2. verilator
> verilator 是用來將 verilog 檔轉換成 C++的物件及標頭檔，讓我們寫測試程式時可以使用所設計的硬體(轉成C++物件)
3. gtkwave
> gtkwave 用來觀看 模擬結果的時序圖
4. vscode
> vscode 編輯器用來編輯 verilog 及 測試程式

## install in ubuntu
1. install riscv gcc

> 推荐使用 Ubuntu 20.04以後的版本，安裝比較簡單。
```
$ lsb_release -a
No LSB modules are available.
Distributor ID:	Ubuntu
Description:	Ubuntu 20.04.3 LTS
Release:	20.04
Codename:	focal

$ uname -r
5.11.0-27-generic
```
> 目前在 Ubuntu 20.04 环境下我们可以直接使用官方提供的 GNU tools：
```
$ sudo apt update
$ sudo apt install build-essential gcc make perl dkms git gcc-riscv64-unknown-elf gdb-multiarch 
```

> install crossed compile in MS windows
> 

2. install verilator
```
https://ubuntu.pkgs.org/20.04/ubuntu-universe-arm64/verilator_4.028-1_arm64.deb.html

# sudo apt-get update
# sudo apt-get install verilator
```
> verilator install in MS Windows


3. install gtkwave
>gtkwave is a viewer for VCD (Value Change Dump) files which are usually created by digital circuit simulators

```
$ sudo apt-get update
$ sudo apt-get -y install gtkwave
```

> install gtkwave in windows
> https://gtkwave.sourceforge.net

4. install vscode
請自行上google 去找解


## install in MS Windows

https://www.msys2.org
:::success
Download and install MSYS2: https://sourceforge.net/projects/msys2/
Open MSYS2 shell and run 
```
pacman -Syu
```
After some time you will be prompted to close the MSYS2 shell by clicking the "X" button, which you should do :-)
Relaunch MSYS2 shell and run 
```
pacman -Su
```
Install the required packages for Verilator:
:::

> install verilator
::: info
```bash=
> pacman -S git make autoconf gcc flex bison man perl python3
Clone the Verilator source and build the latest stable release:
> git clone http://git.veripool.org/git/verilator
> unset VERILATOR_ROOT
> cd verilator
> git checkout stable
> autoconf
> ./configure
> make
```

Test Verilator:
```
> make test
```
If the tests pass, install Verilator. Note that sudo is not used here since this is MSYS2, and that the PATH variable is updated so that the installer can find pod2man:
```
> PATH="/usr/bin/core_perl:${PATH}"
> make install
```
:::


> install gtkwave
:::success

```
> pacman -S mingw-w64-x86_64-gtkwave
```
:::

>install riscv toolchain
:::warning
```
pacman -S mingw-w64-x86_64-riscv64-unknown-elf-gcc
```
:::