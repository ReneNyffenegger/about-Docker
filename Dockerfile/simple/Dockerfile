FROM         mcr.microsoft.com/windows/nanoserver:1809
WORKDIR      C:/work 
COPY         someCommands.bat .

ENV          TQ84_VAR Hello World

#            COPY always copies files, never extracts archives:
COPY         copied.zip       .
COPY         copied.tar       .

#            ADD extracts tar archives, but not zip archives:
ADD          added.zip        .
ADD          added.tar        .

ENTRYPOINT ["cmd.exe", "/c", "someCommands.bat"]
