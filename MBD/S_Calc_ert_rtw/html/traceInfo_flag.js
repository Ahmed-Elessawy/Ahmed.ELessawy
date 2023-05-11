function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["S_Calc.c:45c32"]=1;
    this.traceFlag["S_Calc.c:52c32"]=1;
    this.traceFlag["S_Calc.c:59c32"]=1;
    this.traceFlag["S_Calc.c:66c32"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["S_Calc.c:45"]=1;
    this.lineTraceFlag["S_Calc.c:52"]=1;
    this.lineTraceFlag["S_Calc.c:59"]=1;
    this.lineTraceFlag["S_Calc.c:66"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
