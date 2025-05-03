#include "XLSXTargetMachine.h"
using namespace llvm;

XLSXTargetMachine::XLSXTargetMachine(const Module &M, const std::string &FS)
  : DataLayout("e-p:32:32-i64:64-i128:128"),
    Subtarget(M, FS), InstrInfo(Subtarget),
    FrameInfo(TargetFrameInfo::StackGrowsDown, 8, 0) {
}
