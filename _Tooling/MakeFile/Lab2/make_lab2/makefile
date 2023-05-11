include config.mk

allObjs = $(fileObj1) $(fileObj2) $(fileObj3) $(fileObj4) $(fileObj5) $(fileObj6)

$(FinalTargetName) : CFLAG = 
$(allObjs): CFLAG = -c

$(FinalTargetName) : $(allObjs)
	$(CC) $(CFLAG) $(allObjs) -o $(FinalTargetName) 

$(fileObj1) : $(fileSrc1) 
	$(CC) $(CFLAG) $(fileSrc1) -o $(fileObj1) 
$(fileObj2) : $(fileSrc2) 
	$(CC) $(CFLAG) $(fileSrc2) -o $(fileObj2) 
$(fileObj3) : $(fileSrc3) 
	$(CC) $(CFLAG) $(fileSrc3) -o $(fileObj3) 
$(fileObj4) : $(fileSrc4) 
	$(CC) $(CFLAG) $(fileSrc4) -o $(fileObj4) 
$(fileObj5) : $(fileSrc5) 
	$(CC) $(CFLAG) $(fileSrc5) -o $(fileObj5) 
$(fileObj6) : $(fileSrc6) 
	$(CC) $(CFLAG) $(fileSrc6) -o $(fileObj6) 

.PHONY : clean link onlyCompile

clean: 
	DEL $(FinalTargetName) $(allObjs) 

link: 
	$(CC) $(allObjs) -o $(FinalTargetName) 

onlyCompile: $(allObjs)
