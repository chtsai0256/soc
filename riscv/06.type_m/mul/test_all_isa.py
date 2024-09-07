import os
import subprocess
import sys


# 找出path目录下的所有bin文件
def list_binfiles(path):
    files = []
    list_dir = os.walk(path)
    for maindir, subdir, all_file in list_dir:
        for filename in all_file:
            apath = os.path.join(maindir, filename)
            if apath.endswith('.bin'):
                files.append(apath)

    return files

# 主函数
def main():
    bin_files = list_binfiles(r'isa/generated')

    anyfail = False

    cwd = os.getcwd()
    # 对每一个bin文件进行测试
    errTest = [];
    for file in bin_files:
        cmd = f"{cwd}/obj_dir/Vtest_top.exe {file} 1" 
        f = os.popen(cmd)
        r = f.read()
        f.close()
        if (r.find('PASS') != -1):
            print(file + '    PASS')
        else:
            print(file + '    !!!FAIL!!!')
            errTest.append(file)
            anyfail = True
            #break
    if (anyfail == False):
        print('Congratulation, All PASS...')
    else:
        print(errTest, "FAIL")


if __name__ == '__main__':
    sys.exit(main())
