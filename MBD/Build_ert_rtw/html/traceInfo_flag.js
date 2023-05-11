function TraceInfoFlag() {
    this.traceFlag = new Array();
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["Build.c:43"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
