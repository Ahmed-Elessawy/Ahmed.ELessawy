function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["SubSystemLed.c:71c28"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["SubSystemLed.c:71"]=1;
    this.lineTraceFlag["SubSystemLed.c:76"]=1;
    this.lineTraceFlag["SubSystemLed.c:83"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
