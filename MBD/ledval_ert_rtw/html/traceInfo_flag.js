function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["ledval.c:45c20"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["ledval.c:45"]=1;
    this.lineTraceFlag["ledval.c:48"]=1;
    this.lineTraceFlag["ledval.c:53"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
