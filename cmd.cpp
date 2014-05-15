/* See other files here for the LICENCE that applies here. */
/* See header file .hpp for info */

#include "cmd.hpp"

#include "lib_common1.hpp"

namespace nOT {
namespace nNewcli {

INJECT_OT_COMMON_USING_NAMESPACE_COMMON_1; // <=== namespaces


cCmdProcessing cCmdParser::StartProcessing(const vector<string> &words) {
	return cCmdProcessing( shared_from_this() , words );
}

cCmdProcessing cCmdParser::StartProcessing(const string &words) {
	return StartProcessing( vector<string>{"msg","sendfrom","ra"} ); // TODO @vyrly
}

void cCmdParser::Test() {
	cout << "Test test, object at " << (void*)this << endl;
}


cCmdProcessing::cCmdProcessing(shared_ptr<cCmdParser> _parser, vector<string> _commandLine)
	: parser(_parser), commandLine(_commandLine)
{ }

cParamInfo::cParamInfo(tFuncValid valid, tFuncHint hint) 
	: funcValid(valid), funcHint(hint)
{ }


}; // namespace nNewcli
}; // namespace OT

