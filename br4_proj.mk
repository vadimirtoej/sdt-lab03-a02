##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=br4_proj
ConfigurationName      :=Debug
WorkspacePath          := "/home/stud/Documents/NovikovD/sdt-lab03-a01"
ProjectPath            := "/home/stud/Documents/NovikovD/sdt-lab03-a01"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Student
Date                   :=07/10/16
CodeLitePath           :="/home/stud/.codelite"
LinkerName             :=g++
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :="br4_proj.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -g -std=c++11 -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/input.cc$(ObjectSuffix) $(IntermediateDirectory)/lec_4.cpp$(ObjectSuffix) $(IntermediateDirectory)/line.cc$(ObjectSuffix) $(IntermediateDirectory)/metro.cc$(ObjectSuffix) $(IntermediateDirectory)/output.cc$(ObjectSuffix) $(IntermediateDirectory)/parser.cc$(ObjectSuffix) $(IntermediateDirectory)/station.cc$(ObjectSuffix) $(IntermediateDirectory)/transit.cc$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/stud/Documents/NovikovD/sdt-lab03-a01/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM "main.cpp"

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) "main.cpp"

$(IntermediateDirectory)/input.cc$(ObjectSuffix): input.cc $(IntermediateDirectory)/input.cc$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/stud/Documents/NovikovD/sdt-lab03-a01/input.cc" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/input.cc$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/input.cc$(DependSuffix): input.cc
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/input.cc$(ObjectSuffix) -MF$(IntermediateDirectory)/input.cc$(DependSuffix) -MM "input.cc"

$(IntermediateDirectory)/input.cc$(PreprocessSuffix): input.cc
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/input.cc$(PreprocessSuffix) "input.cc"

$(IntermediateDirectory)/lec_4.cpp$(ObjectSuffix): lec_4.cpp $(IntermediateDirectory)/lec_4.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/stud/Documents/NovikovD/sdt-lab03-a01/lec_4.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/lec_4.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/lec_4.cpp$(DependSuffix): lec_4.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/lec_4.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/lec_4.cpp$(DependSuffix) -MM "lec_4.cpp"

$(IntermediateDirectory)/lec_4.cpp$(PreprocessSuffix): lec_4.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/lec_4.cpp$(PreprocessSuffix) "lec_4.cpp"

$(IntermediateDirectory)/line.cc$(ObjectSuffix): line.cc $(IntermediateDirectory)/line.cc$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/stud/Documents/NovikovD/sdt-lab03-a01/line.cc" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/line.cc$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/line.cc$(DependSuffix): line.cc
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/line.cc$(ObjectSuffix) -MF$(IntermediateDirectory)/line.cc$(DependSuffix) -MM "line.cc"

$(IntermediateDirectory)/line.cc$(PreprocessSuffix): line.cc
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/line.cc$(PreprocessSuffix) "line.cc"

$(IntermediateDirectory)/metro.cc$(ObjectSuffix): metro.cc $(IntermediateDirectory)/metro.cc$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/stud/Documents/NovikovD/sdt-lab03-a01/metro.cc" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/metro.cc$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/metro.cc$(DependSuffix): metro.cc
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/metro.cc$(ObjectSuffix) -MF$(IntermediateDirectory)/metro.cc$(DependSuffix) -MM "metro.cc"

$(IntermediateDirectory)/metro.cc$(PreprocessSuffix): metro.cc
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/metro.cc$(PreprocessSuffix) "metro.cc"

$(IntermediateDirectory)/output.cc$(ObjectSuffix): output.cc $(IntermediateDirectory)/output.cc$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/stud/Documents/NovikovD/sdt-lab03-a01/output.cc" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/output.cc$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/output.cc$(DependSuffix): output.cc
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/output.cc$(ObjectSuffix) -MF$(IntermediateDirectory)/output.cc$(DependSuffix) -MM "output.cc"

$(IntermediateDirectory)/output.cc$(PreprocessSuffix): output.cc
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/output.cc$(PreprocessSuffix) "output.cc"

$(IntermediateDirectory)/parser.cc$(ObjectSuffix): parser.cc $(IntermediateDirectory)/parser.cc$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/stud/Documents/NovikovD/sdt-lab03-a01/parser.cc" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/parser.cc$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/parser.cc$(DependSuffix): parser.cc
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/parser.cc$(ObjectSuffix) -MF$(IntermediateDirectory)/parser.cc$(DependSuffix) -MM "parser.cc"

$(IntermediateDirectory)/parser.cc$(PreprocessSuffix): parser.cc
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/parser.cc$(PreprocessSuffix) "parser.cc"

$(IntermediateDirectory)/station.cc$(ObjectSuffix): station.cc $(IntermediateDirectory)/station.cc$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/stud/Documents/NovikovD/sdt-lab03-a01/station.cc" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/station.cc$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/station.cc$(DependSuffix): station.cc
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/station.cc$(ObjectSuffix) -MF$(IntermediateDirectory)/station.cc$(DependSuffix) -MM "station.cc"

$(IntermediateDirectory)/station.cc$(PreprocessSuffix): station.cc
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/station.cc$(PreprocessSuffix) "station.cc"

$(IntermediateDirectory)/transit.cc$(ObjectSuffix): transit.cc $(IntermediateDirectory)/transit.cc$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/stud/Documents/NovikovD/sdt-lab03-a01/transit.cc" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/transit.cc$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/transit.cc$(DependSuffix): transit.cc
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/transit.cc$(ObjectSuffix) -MF$(IntermediateDirectory)/transit.cc$(DependSuffix) -MM "transit.cc"

$(IntermediateDirectory)/transit.cc$(PreprocessSuffix): transit.cc
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/transit.cc$(PreprocessSuffix) "transit.cc"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


