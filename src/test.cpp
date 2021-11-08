/*********************************************************************************
 * @copyright Copyright (c) 2021 by Guilherme Shimabuko - Shima's Digital Hardware
 *
 *     Redistribution and use in source and binary forms, with or without
 *     modification, are permitted provided that the following conditions
 *     are met:
 *     
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *
 *     * Neither the name of Shima's DIgital Hardware  nor the names of its
 *       contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 *     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
 *     IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 *     TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTI-
 *     CULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL SHIMA'S DIGITAL HARDWARE
 *     BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR 
 *     CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF 
 *     SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS 
 *     INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN 
 *     CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *     ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF 
 *     THE POSSIBILITY OF SUCH DAMAGE.
 *
 *********************************************************************************
 *
 * @file test.cpp
 * @brief Implementation of a hex to base 64 conversion test
 *
 * @details This file implements functions to test the conversion of a string
 *          in hexadecimal base to a 64 base.
 *          The implemented functions are as follows:
 *              1. defaultTest() - Tests a hardcoded string with a hardcoded output;
 *              2. expectedOutputTest() - Uses user input Strings to compair results;
 *
 * @author Guilherme Shimabuko
 * 
 * date of last update in yy-mm-dd format
 *
 * @date 2021-09-08
 *
 * @version 1.01
 * 
 *      Version History
 *
 *      Version     Date            Author          Changes
 * 
 *      1.01        2021-09-08      GSHIMABUKO      Added Copyright and Header
 *                                                  Comments
 *
 *      1.00        2021-09-03      GSHIMABUKO      Defualt and user input tests 
 *                                                  implemented
 *
 *********************************************************************************
 */

#include "stringLength.h"
#include <string>
#include <iostream>

int main(){
    std::string s = "";
    std::cout << "Length of String is: " << Length(s) << std::endl;
    return(0);
}
