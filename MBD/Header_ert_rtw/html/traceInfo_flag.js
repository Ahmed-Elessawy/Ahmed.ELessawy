function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["Header.c:47c20"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["Header.c:47"]=1;
    this.lineTraceFlag["Header.c:51"]=1;
    this.lineTraceFlag["Header.c:79"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
