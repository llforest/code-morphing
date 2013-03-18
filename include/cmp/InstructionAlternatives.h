// Copyright 2013 Marco Minutoli <mminutoli@gmail.com>

// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU  General Public License as published by
// the Free Software Foundation; either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
// MA 02110-1301, USA.


#ifndef _INSTRUCTIONALTERNATIVES_H_
#define _INSTRUCTIONALTERNATIVES_H_

#include "llvm/IR/BasicBlock.h"
#include "llvm/IR/Instruction.h"

#include <vector>


namespace cmp
{

class InstructionAlternatives
{
 public:
  static std::vector<llvm::BasicBlock *> Build(llvm::Instruction & I);
};

}

#endif /* _INSTRUCTIONALTERNATIVES_H_ */