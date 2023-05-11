function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["SubFunCalc.c:52c40"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["SubFunCalc.c:52"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
