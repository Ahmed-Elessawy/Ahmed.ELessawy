function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["Fact_State.c:50c26"]=1;
    this.traceFlag["Fact_State.c:54c23"]=1;
    this.traceFlag["Fact_State.c:57c20"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["Fact_State.c:50"]=1;
    this.lineTraceFlag["Fact_State.c:54"]=1;
    this.lineTraceFlag["Fact_State.c:57"]=1;
    this.lineTraceFlag["Fact_State.c:84"]=1;
    this.lineTraceFlag["Fact_State.c:89"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
