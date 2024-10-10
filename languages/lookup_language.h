#pragma once
#ifndef _LOOKUP_TABLE_H_
#define _LOOKUP_TABLE_H_
#include <string>
#include <unordered_map>
#include <map>
#include <vector>
#include <iostream>
/** ------------------------------------------------------------------
 * @brief A hardcoded map that is used immensly throughout this codebase
 * @details Use grep -R 'downloads' ../ or ./ 
 *
*/
static const std::unordered_map<std::string, std::string> downloads = {
    {"C", "https://gcc.gnu.org/"},
    {"CPP", "https://gcc.gnu.org/"},
    {"Java", "https://www.oracle.com/java/technologies/javase-downloads.html"},
    {"Python", "https://www.python.org/downloads/"},
    {"JavaScript", "https://nodejs.org/en/download/"},
    {"Ruby", "https://www.ruby-lang.org/en/downloads/"},
    {"Swift", "https://swift.org/download/"},
    {"Go", "https://golang.org/dl/"},
    {"Kotlin", "https://kotlinlang.org/docs/install.html"},
    {"Scala", "https://www.scala-lang.org/download/"},
    {"TypeScript", "https://www.typescriptlang.org/download"},
    {"PHP", "https://www.php.net/downloads"},
    {"Perl", "https://www.perl.org/get.html"},
    {"R", "https://cran.r-project.org/mirrors.html"},
    {"Objective-C", "https://developer.apple.com/xcode/"},
    {"Haskell", "https://www.haskell.org/platform/"},
    {"Rust", "https://www.rust-lang.org/tools/install"},
    {"Dart", "https://dart.dev/get-dart"},
    {"Lua", "https://www.lua.org/download.html"},
    {"Shell (Bash)", "https://www.gnu.org/software/bash/"},
    {"HTML/CSS", "https://www.w3.org/Style/CSS/"},
    {"SQL", "https://www.mysql.com/downloads/"},
    {"MATLAB", "https://www.mathworks.com/downloads/"},
    {"VHDL/Verilog", "https://www.eda.org/"},
    {"FSharp", "https://dotnet.microsoft.com/download/dotnet/5.0"},
    {"CSharp", "https://dotnet.microsoft.com/download/dotnet/5.0"},
    {"VBA", "https://www.microsoft.com/en-us/microsoft-365/access"},
    {"Fortran", "https://gcc.gnu.org/fortran/"},
    {"COBOL", "https://www.gnu.org/software/gcc/cobol/"},
    {"Pascal", "https://www.freepascal.org/download.html"},
    {"LISP/Scheme", "https://mitpress.mit.edu/9780262530054/structure-and-interpretation-of-computer-programs/"},
    {"Groovy", "https://groovy-lang.org/download.html"},
    {"Erlang", "https://www.erlang.org/downloads"},
    {"Clojure", "https://clojure.org/guides/getting_started"},
    {"Prolog", "https://www.swi-prolog.org/Download.html"},
    {"Ada", "https://www.adacore.com/download"},
    {"AWK", "https://awk.js.org/"},
    {"TCL", "https://www.activestate.com/products/tcl/"},
    {"D", "https://dlang.org/download.html"},
    {"Julia", "https://julialang.org/downloads/"},
    {"Visual Basic", "https://visualstudio.microsoft.com/vs/"},
    {"PowerShell", "https://docs.microsoft.com/en-us/powershell/scripting/install/installing-powershell-core-on-windows"},
    {"Racket", "https://racket-lang.org/download/"},
    {"Elm", "https://guide.elm-lang.org/install.html"},
    {"Eiffel", "https://www.eiffel.com/"},
    {"LabVIEW", "https://www.ni.com/en-us/support/downloads/software-products/download.labview.html"},
    {"Smalltalk", "https://www.squeak.org/"},
    {"SML", "https://www.standardml.org/"},
    {"Custom", ""} // if running custom, refer to the hasRules struct
};
/** --------------------------------------------------------------------------
 * @brief A hardcoded map that is used immensly throughout this codebase
 * @details Use grep -R 'downloads' ../ or ./ 
 *
 * ---------------------------------------------------------------------------
*/
static const std::unordered_map<std::string, std::vector<std::string>> languageExtensions = {
        {"C", {".c"}},
        {"CPP", {".cpp", ".cc", ".cxx"}},
        {"Java", {".java"}},
        {"Python", {".py"}},
        {"JavaScript", {".js"}},
        {"Ruby", {".rb"}},
        {"Swift", {".swift"}},
        {"Go", {".go"}},
        {"Kotlin", {".kt", ".kts"}},
        {"Scala", {".scala"}},
        {"TypeScript", {".ts"}},
        {"PHP", {".php"}},
        {"Perl", {".pl"}},
        {"R", {".r", ".R"}},
        {"Objective-C", {".m"}},
        {"Haskell", {".hs"}},
        {"Rust", {".rs"}},
        {"Dart", {".dart"}},
        {"Lua", {".lua"}},
        {"Shell (Bash)", {".sh"}},
        {"HTML/CSS", {".html", ".css"}},
        {"SQL", {".sql"}},
        {"MATLAB", {".m"}},
        {"VHDL/Verilog", {".vhd", ".vhdl", ".v", ".sv", ".svh"}},
        {"FSharp", {".fs", ".fsx", ".fsscript"}},
        {"CSharp", {".cs"}},
        {"VBA", {".vba"}},
        {"Fortran", {".f", ".f90", ".f95", ".f03", ".f08"}},
        {"COBOL", {".cob", ".cbl"}},
        {"Pascal", {".pas"}},
        {"LISP/Scheme", {".lisp", ".scm"}},
        {"Groovy", {".groovy"}},
        {"Erlang", {".erl"}},
        {"Clojure", {".clj"}},
        {"Prolog", {".pl", ".pro"}},
        {"Ada", {".ada", ".adb"}},
        {"AWK", {".awk"}},
        {"TCL", {".tcl"}},
        {"D", {".d"}},
        {"Julia", {".jl"}},
        {"Visual Basic", {".vb"}},
        {"PowerShell", {".ps1", ".psm1", ".psd1"}},
        {"Racket", {".rkt"}},
        {"Elm", {".elm"}},
        {"Eiffel", {".e"}},
        {"LabVIEW", {".vi"}},
        {"Smalltalk", {".st"}}, 
        {"SML", {".sml", ".ml"}},
        {"Custom", {".custom"}}
    };
/** --------------------------------------------------------------------------
 * @brief A hardcoded map that is used immensly throughout this codebase
 *
 * @details Use grep -R 'languageTypes' ../ or ./ 
 * ---------------------------------------------------------------------------
*/
static const std::unordered_map<std::string, std::string> languageTypes = {
    {"C", "Compiled"},
    {"CPP", "Compiled"},
    {"Java", "Compiled"},
    {"Python", "Interpreted"},
    {"JavaScript", "Interpreted"},
    {"Ruby", "Interpreted"},
    {"Swift", "Compiled"},
    {"Go", "Compiled"},
    {"Kotlin", "Compiled"},
    {"Scala", "Compiled"},
    {"TypeScript", "Compiled"},
    {"PHP", "Interpreted"},
    {"Perl", "Interpreted"},
    {"R", "Interpreted"},
    {"Objective-C", "Compiled"},
    {"Haskell", "Compiled"},
    {"Rust", "Compiled"},
    {"Dart", "Compiled"},
    {"Lua", "Interpreted"},
    {"Shell (Bash)", "Interpreted"},
    {"HTML/CSS", "Interpreted"},
    {"SQL", "Interpreted"},
    {"MATLAB", "Compiled"},
    {"VHDL/Verilog", "Compiled"},
    {"FSharp", "Compiled"},
    {"CSharp", "Compiled"},
    {"VBA", "Compiled"},
    {"Fortran", "Compiled"},
    {"COBOL", "Compiled"},
    {"Pascal", "Compiled"},
    {"LISP/Scheme", "Interpreted"},
    {"Groovy", "Compiled"},
    {"Erlang", "Interpreted"},
    {"Clojure", "Interpreted"},
    {"Prolog", "Interpreted"},
    {"Ada", "Compiled"},
    {"AWK", "Interpreted"},
    {"TCL", "Interpreted"},
    {"D", "Compiled"},
    {"Julia", "Compiled"},
    {"Visual Basic", "Compiled"},
    {"PowerShell", "Interpreted"},
    {"Racket", "Interpreted"},
    {"Elm", "Compiled"},
    {"Eiffel", "Compiled"},
    {"LabVIEW", "Compiled"},
    {"Smalltalk", "Interpreted"}, 
    {"SML", "Compiled"}
};
#endif 