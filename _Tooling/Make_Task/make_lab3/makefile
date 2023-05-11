.SILENT:Dependencies
include config.mk
allObjs = $(allSrcs:.c=.o)
allDeps = $(allSrcs:.c=.d)
var=python Progress.py
var1=cmd /C progress.bat
$(FinalTargetName) : CFLAG = 
$(allObjs): CFLAG = -c
$(allDeps): CFLAG = -MM

$(FinalTargetName) : $(allObjs)
	
	@$(CC) $(CFLAG) $^ -o $@
	@$(var1)
	@$(var)
	
$(allObjs) : %.o : %.c
	
	@$(CC) $(CFLAG) $< -o $@
	@$(var1)
	@$(var)	
	

$(allDeps) : %.d : %.c | Dependencies
	
	@$(CC) $(CFLAG) $< -o $@
	@$(var1)
	@$(var)
	@copy /y $@ Dependencies\
	


Dependencies:
	@mkdir $@
	

.PHONY: clean link onlyCompile depend all

clean: 
	DEL /Q $(FinalTargetName) $(allObjs) $(allDeps) Dependencies\*
	rmdir Dependencies
	@DEL progress.txt
	@$(var1)

link: 
	$(CC) $(CFLAG) $(allObjs) -o $(FinalTargetName)

onlyCompile: $(allObjs)
  


depend: $(allDeps)
 


all: $(allDeps) 
	$(MAKE) $(FinalTargetName)
	@DEL progress.txt
	@$(var1)

