// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmul.h"
#include "Vmul__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmul::Vmul(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmul__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_i{vlSymsp->TOP.rst_i}
    , req_i{vlSymsp->TOP.req_i}
    , ready_o{vlSymsp->TOP.ready_o}
    , a_i{vlSymsp->TOP.a_i}
    , b_i{vlSymsp->TOP.b_i}
    , result_o{vlSymsp->TOP.result_o}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmul::Vmul(const char* _vcname__)
    : Vmul(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmul::~Vmul() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmul___024root___eval_debug_assertions(Vmul___024root* vlSelf);
#endif  // VL_DEBUG
void Vmul___024root___eval_static(Vmul___024root* vlSelf);
void Vmul___024root___eval_initial(Vmul___024root* vlSelf);
void Vmul___024root___eval_settle(Vmul___024root* vlSelf);
void Vmul___024root___eval(Vmul___024root* vlSelf);

void Vmul::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmul::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmul___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmul___024root___eval_static(&(vlSymsp->TOP));
        Vmul___024root___eval_initial(&(vlSymsp->TOP));
        Vmul___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmul___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
}

//============================================================
// Events and timing
bool Vmul::eventsPending() { return false; }

uint64_t Vmul::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmul::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmul___024root___eval_final(Vmul___024root* vlSelf);

VL_ATTR_COLD void Vmul::final() {
    Vmul___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmul::hierName() const { return vlSymsp->name(); }
const char* Vmul::modelName() const { return "Vmul"; }
unsigned Vmul::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vmul::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmul___024root__trace_init_top(Vmul___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmul___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmul___024root*>(voidSelf);
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vmul___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vmul___024root__trace_register(Vmul___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmul::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmul::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmul___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
