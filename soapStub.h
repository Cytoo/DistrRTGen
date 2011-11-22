/* soapStub.h
   Generated by gSOAP 2.7.11 from temp.h
   Copyright(C) 2000-2008, Robert van Engelen, Genivia Inc. All Rights Reserved.
   This part of the software is released under one of the following licenses:
   GPL, the gSOAP public license, or Genivia's license for commercial use.
*/

#ifndef soapStub_H
#define soapStub_H
#include <vector>
#include "stdsoap2.h"

/******************************************************************************\
 *                                                                            *
 * Enumerations                                                               *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Classes and Structs                                                        *
 *                                                                            *
\******************************************************************************/


#if 0 /* volatile type: do not redeclare here */

#endif

#ifndef SOAP_TYPE_xsd__base64Binary
#define SOAP_TYPE_xsd__base64Binary (8)
/* Base64 schema type: */
class SOAP_CMAC xsd__base64Binary
{
public:
	unsigned char *__ptr;
	int __size;
	char *id;	/* optional element of type xsd:string */
	char *type;	/* optional element of type xsd:string */
	char *options;	/* optional element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 8; } /* = unique id SOAP_TYPE_xsd__base64Binary */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         xsd__base64Binary() : __ptr(NULL), __size(0), id(NULL), type(NULL), options(NULL), soap(NULL) { }
	virtual ~xsd__base64Binary() { }
};
#endif

#if 0 /* volatile type: do not redeclare here */

#endif

#ifndef SOAP_TYPE_ns1__Credentials
#define SOAP_TYPE_ns1__Credentials (13)
/* ns1:Credentials */
class SOAP_CMAC ns1__Credentials
{
public:
	std::string Username;	/* required element of type xsd:string */
	std::string Password;	/* required element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 13; } /* = unique id SOAP_TYPE_ns1__Credentials */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         ns1__Credentials() : soap(NULL) { }
	virtual ~ns1__Credentials() { }
};
#endif

#ifndef SOAP_TYPE_ns1__CPU
#define SOAP_TYPE_ns1__CPU (14)
/* ns1:CPU */
class SOAP_CMAC ns1__CPU
{
public:
	std::string Architecture;	/* required element of type xsd:string */
	int CurrentSpeed;	/* required element of type xsd:int */
	int MaxSpeed;	/* required element of type xsd:int */
	int NumCores;	/* required element of type xsd:int */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 14; } /* = unique id SOAP_TYPE_ns1__CPU */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         ns1__CPU() : CurrentSpeed(0), MaxSpeed(0), NumCores(0), soap(NULL) { }
	virtual ~ns1__CPU() { }
};
#endif

#ifndef SOAP_TYPE_ns1__ArrayOfCPU
#define SOAP_TYPE_ns1__ArrayOfCPU (15)
/* ns1:ArrayOfCPU */
class SOAP_CMAC ns1__ArrayOfCPU
{
public:
	std::vector<ns1__CPU * >CPUElement;	/* optional element of type ns1:CPU */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 15; } /* = unique id SOAP_TYPE_ns1__ArrayOfCPU */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         ns1__ArrayOfCPU() : soap(NULL) { }
	virtual ~ns1__ArrayOfCPU() { }
};
#endif

#ifndef SOAP_TYPE_ns1__rtgenDetails
#define SOAP_TYPE_ns1__rtgenDetails (16)
/* ns1:rtgenDetails */
class SOAP_CMAC ns1__rtgenDetails
{
public:
	std::string Version;	/* required element of type xsd:string */
	std::string Architecture;	/* required element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 16; } /* = unique id SOAP_TYPE_ns1__rtgenDetails */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         ns1__rtgenDetails() : soap(NULL) { }
	virtual ~ns1__rtgenDetails() { }
};
#endif

#ifndef SOAP_TYPE_ns1__MachineInfo
#define SOAP_TYPE_ns1__MachineInfo (17)
/* ns1:MachineInfo */
class SOAP_CMAC ns1__MachineInfo
{
public:
	ns1__Credentials *Credentials;	/* required element of type ns1:Credentials */
	std::string Version;	/* required element of type xsd:string */
	std::string Hostname;	/* required element of type xsd:string */
	int SupportHybrid;	/* required element of type xsd:int */
	ns1__ArrayOfCPU *CPU;	/* required element of type ns1:ArrayOfCPU */
	int ClientID;	/* required element of type xsd:int */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 17; } /* = unique id SOAP_TYPE_ns1__MachineInfo */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         ns1__MachineInfo() : Credentials(NULL), SupportHybrid(0), CPU(NULL), ClientID(0), soap(NULL) { }
	virtual ~ns1__MachineInfo() { }
};
#endif

#ifndef SOAP_TYPE_ns1__WorkUnit
#define SOAP_TYPE_ns1__WorkUnit (18)
/* ns1:WorkUnit */
class SOAP_CMAC ns1__WorkUnit
{
public:
	unsigned int PartID;	/* required element of type xsd:unsignedInt */
	std::string HashRoutine;	/* required element of type xsd:string */
	std::string Charset;	/* required element of type xsd:string */
	unsigned int MinLetters;	/* required element of type xsd:unsignedInt */
	unsigned int MaxLetters;	/* required element of type xsd:unsignedInt */
	unsigned int Index;	/* required element of type xsd:unsignedInt */
	unsigned int ChainLength;	/* required element of type xsd:unsignedInt */
	unsigned int ChainCount;	/* required element of type xsd:unsignedInt */
	ULONG64 ChainStart;	/* required element of type xsd:unsignedLong */
	std::string Salt;	/* required element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 18; } /* = unique id SOAP_TYPE_ns1__WorkUnit */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         ns1__WorkUnit() : PartID(0), MinLetters(0), MaxLetters(0), Index(0), ChainLength(0), ChainCount(0), ChainStart(0), soap(NULL) { }
	virtual ~ns1__WorkUnit() { }
};
#endif

#ifndef SOAP_TYPE_ns1__ArrayOfWorkUnit
#define SOAP_TYPE_ns1__ArrayOfWorkUnit (19)
/* ns1:ArrayOfWorkUnit */
class SOAP_CMAC ns1__ArrayOfWorkUnit
{
public:
	std::vector<ns1__WorkUnit * >WorkUnitElement;	/* optional element of type ns1:WorkUnit */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 19; } /* = unique id SOAP_TYPE_ns1__ArrayOfWorkUnit */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         ns1__ArrayOfWorkUnit() : soap(NULL) { }
	virtual ~ns1__ArrayOfWorkUnit() { }
};
#endif

#ifndef SOAP_TYPE_ns1__IndexHash
#define SOAP_TYPE_ns1__IndexHash (20)
/* ns1:IndexHash */
class SOAP_CMAC ns1__IndexHash
{
public:
	unsigned int RequestID;	/* required element of type xsd:unsignedInt */
	std::string Hash;	/* required element of type xsd:string */
	std::string HashRoutine;	/* required element of type xsd:string */
	std::string Charset;	/* required element of type xsd:string */
	unsigned int ChainLength;	/* required element of type xsd:unsignedInt */
	unsigned int MinLetters;	/* required element of type xsd:unsignedInt */
	unsigned int MaxLetters;	/* required element of type xsd:unsignedInt */
	unsigned int Index;	/* required element of type xsd:unsignedInt */
	std::string Salt;	/* required element of type xsd:string */
	std::string ExpireTime;	/* required element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 20; } /* = unique id SOAP_TYPE_ns1__IndexHash */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         ns1__IndexHash() : RequestID(0), ChainLength(0), MinLetters(0), MaxLetters(0), Index(0), soap(NULL) { }
	virtual ~ns1__IndexHash() { }
};
#endif

#ifndef SOAP_TYPE_ns1__ArrayOfIndexHash
#define SOAP_TYPE_ns1__ArrayOfIndexHash (21)
/* ns1:ArrayOfIndexHash */
class SOAP_CMAC ns1__ArrayOfIndexHash
{
public:
	std::vector<ns1__IndexHash * >IndexHashElement;	/* optional element of type ns1:IndexHash */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 21; } /* = unique id SOAP_TYPE_ns1__ArrayOfIndexHash */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         ns1__ArrayOfIndexHash() : soap(NULL) { }
	virtual ~ns1__ArrayOfIndexHash() { }
};
#endif

#ifndef SOAP_TYPE_ns1__ChainCheckHash
#define SOAP_TYPE_ns1__ChainCheckHash (22)
/* ns1:ChainCheckHash */
class SOAP_CMAC ns1__ChainCheckHash
{
public:
	unsigned int RequestID;	/* required element of type xsd:unsignedInt */
	std::string Hash;	/* required element of type xsd:string */
	std::string HashRoutine;	/* required element of type xsd:string */
	std::string Charset;	/* required element of type xsd:string */
	unsigned int ChainLength;	/* required element of type xsd:unsignedInt */
	unsigned int MinLetters;	/* required element of type xsd:unsignedInt */
	unsigned int MaxLetters;	/* required element of type xsd:unsignedInt */
	unsigned int Index;	/* required element of type xsd:unsignedInt */
	std::string Salt;	/* required element of type xsd:string */
	std::string ExpireTime;	/* required element of type xsd:string */
	std::string Chains;	/* required element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 22; } /* = unique id SOAP_TYPE_ns1__ChainCheckHash */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         ns1__ChainCheckHash() : RequestID(0), ChainLength(0), MinLetters(0), MaxLetters(0), Index(0), soap(NULL) { }
	virtual ~ns1__ChainCheckHash() { }
};
#endif

#ifndef SOAP_TYPE_ns1__ArrayOfChainCheckHash
#define SOAP_TYPE_ns1__ArrayOfChainCheckHash (23)
/* ns1:ArrayOfChainCheckHash */
class SOAP_CMAC ns1__ArrayOfChainCheckHash
{
public:
	std::vector<ns1__ChainCheckHash * >ChainCheckHashElement;	/* optional element of type ns1:ChainCheckHash */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 23; } /* = unique id SOAP_TYPE_ns1__ArrayOfChainCheckHash */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         ns1__ArrayOfChainCheckHash() : soap(NULL) { }
	virtual ~ns1__ArrayOfChainCheckHash() { }
};
#endif

#ifndef SOAP_TYPE_ns1__RainbowTableStatus
#define SOAP_TYPE_ns1__RainbowTableStatus (24)
/* ns1:RainbowTableStatus */
class SOAP_CMAC ns1__RainbowTableStatus
{
public:
	std::string Tablename;	/* required element of type xsd:string */
	std::string Status;	/* required element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 24; } /* = unique id SOAP_TYPE_ns1__RainbowTableStatus */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         ns1__RainbowTableStatus() : soap(NULL) { }
	virtual ~ns1__RainbowTableStatus() { }
};
#endif

#ifndef SOAP_TYPE_ns1__ArrayOfRainbowTableStatus
#define SOAP_TYPE_ns1__ArrayOfRainbowTableStatus (25)
/* ns1:ArrayOfRainbowTableStatus */
class SOAP_CMAC ns1__ArrayOfRainbowTableStatus
{
public:
	std::vector<ns1__RainbowTableStatus * >RainbowTableStatusElement;	/* optional element of type ns1:RainbowTableStatus */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 25; } /* = unique id SOAP_TYPE_ns1__ArrayOfRainbowTableStatus */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         ns1__ArrayOfRainbowTableStatus() : soap(NULL) { }
	virtual ~ns1__ArrayOfRainbowTableStatus() { }
};
#endif

#ifndef SOAP_TYPE_ns1__RegisterNewClientResponse
#define SOAP_TYPE_ns1__RegisterNewClientResponse (40)
/* ns1:RegisterNewClientResponse */
struct ns1__RegisterNewClientResponse
{
public:
	int ClientID;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type xsd:int */
	int ErrorCode;	/* required element of type xsd:int */
};
#endif

#ifndef SOAP_TYPE_ns1__RegisterNewClient
#define SOAP_TYPE_ns1__RegisterNewClient (44)
/* ns1:RegisterNewClient */
struct ns1__RegisterNewClient
{
public:
	ns1__MachineInfo *MachineInfo;	/* optional element of type ns1:MachineInfo */
};
#endif

#ifndef SOAP_TYPE_ns1__RequestWorkResponse
#define SOAP_TYPE_ns1__RequestWorkResponse (45)
/* ns1:RequestWorkResponse */
struct ns1__RequestWorkResponse
{
public:
	ns1__ArrayOfWorkUnit *WorkUnit;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type ns1:ArrayOfWorkUnit */
	std::string CharsetMD5;	/* required element of type xsd:string */
	ns1__rtgenDetails *rtgencmd;	/* optional element of type ns1:rtgenDetails */
	int ErrorCode;	/* required element of type xsd:int */
};
#endif

#ifndef SOAP_TYPE_ns1__RequestWork
#define SOAP_TYPE_ns1__RequestWork (50)
/* ns1:RequestWork */
struct ns1__RequestWork
{
public:
	ns1__MachineInfo *MachineInfo;	/* optional element of type ns1:MachineInfo */
	int NumPieces;	/* required element of type xsd:int */
};
#endif

#ifndef SOAP_TYPE_ns1__UploadCompletedWorkResponse
#define SOAP_TYPE_ns1__UploadCompletedWorkResponse (51)
/* ns1:UploadCompletedWorkResponse */
struct ns1__UploadCompletedWorkResponse
{
public:
	int ErrorCode;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type xsd:int */
};
#endif

#ifndef SOAP_TYPE_ns1__UploadCompletedWork
#define SOAP_TYPE_ns1__UploadCompletedWork (54)
/* ns1:UploadCompletedWork */
struct ns1__UploadCompletedWork
{
public:
	int PartID;	/* required element of type xsd:int */
	xsd__base64Binary Data;	/* required element of type xsd:base64Binary */
};
#endif

#ifndef SOAP_TYPE_ns1__RequestHashToIndexResponse
#define SOAP_TYPE_ns1__RequestHashToIndexResponse (55)
/* ns1:RequestHashToIndexResponse */
struct ns1__RequestHashToIndexResponse
{
public:
	ns1__ArrayOfIndexHash *IndexHash;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type ns1:ArrayOfIndexHash */
	int ErrorCode;	/* required element of type xsd:int */
};
#endif

#ifndef SOAP_TYPE_ns1__RequestHashToIndex
#define SOAP_TYPE_ns1__RequestHashToIndex (59)
/* ns1:RequestHashToIndex */
struct ns1__RequestHashToIndex
{
public:
	ns1__MachineInfo *MachineInfo;	/* optional element of type ns1:MachineInfo */
	unsigned int NumHashes;	/* required element of type xsd:unsignedInt */
	unsigned int RecievePublicHashes;	/* required element of type xsd:unsignedInt */
};
#endif

#ifndef SOAP_TYPE_ns1__UploadHashIndexListResponse
#define SOAP_TYPE_ns1__UploadHashIndexListResponse (60)
/* ns1:UploadHashIndexListResponse */
struct ns1__UploadHashIndexListResponse
{
public:
	int ErrorCode;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type xsd:int */
};
#endif

#ifndef SOAP_TYPE_ns1__UploadHashIndexList
#define SOAP_TYPE_ns1__UploadHashIndexList (63)
/* ns1:UploadHashIndexList */
struct ns1__UploadHashIndexList
{
public:
	ns1__MachineInfo *MachineInfo;	/* optional element of type ns1:MachineInfo */
	unsigned int RequestID;	/* required element of type xsd:unsignedInt */
	std::string IndiceList;	/* required element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE_ns1__RequestChainCheckResponse
#define SOAP_TYPE_ns1__RequestChainCheckResponse (64)
/* ns1:RequestChainCheckResponse */
struct ns1__RequestChainCheckResponse
{
public:
	ns1__ArrayOfChainCheckHash *ChainCheckHashList;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type ns1:ArrayOfChainCheckHash */
	int ErrorCode;	/* required element of type xsd:int */
};
#endif

#ifndef SOAP_TYPE_ns1__RequestChainCheck
#define SOAP_TYPE_ns1__RequestChainCheck (68)
/* ns1:RequestChainCheck */
struct ns1__RequestChainCheck
{
public:
	ns1__MachineInfo *MachineInfo;	/* optional element of type ns1:MachineInfo */
	unsigned int NumHashes;	/* required element of type xsd:unsignedInt */
	unsigned int RecievePublicHashes;	/* required element of type xsd:unsignedInt */
};
#endif

#ifndef SOAP_TYPE_ns1__SendChainCheckResultResponse
#define SOAP_TYPE_ns1__SendChainCheckResultResponse (69)
/* ns1:SendChainCheckResultResponse */
struct ns1__SendChainCheckResultResponse
{
public:
	int ErrorCode;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type xsd:int */
};
#endif

#ifndef SOAP_TYPE_ns1__SendChainCheckResult
#define SOAP_TYPE_ns1__SendChainCheckResult (72)
/* ns1:SendChainCheckResult */
struct ns1__SendChainCheckResult
{
public:
	ns1__MachineInfo *MachineInfo;	/* optional element of type ns1:MachineInfo */
	unsigned int RequestID;	/* required element of type xsd:unsignedInt */
	std::string Password;	/* required element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE_ns1__ReportErrorResponse
#define SOAP_TYPE_ns1__ReportErrorResponse (73)
/* ns1:ReportErrorResponse */
struct ns1__ReportErrorResponse
{
public:
	int ErrorCode;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type xsd:int */
};
#endif

#ifndef SOAP_TYPE_ns1__ReportError
#define SOAP_TYPE_ns1__ReportError (76)
/* ns1:ReportError */
struct ns1__ReportError
{
public:
	ns1__MachineInfo *MachineInfo;	/* optional element of type ns1:MachineInfo */
	std::string ErrorString;	/* required element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE_ns1__RequestDetailedCrackingInfoResponse
#define SOAP_TYPE_ns1__RequestDetailedCrackingInfoResponse (77)
/* ns1:RequestDetailedCrackingInfoResponse */
struct ns1__RequestDetailedCrackingInfoResponse
{
public:
	ns1__ArrayOfRainbowTableStatus *HashStatus;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type ns1:ArrayOfRainbowTableStatus */
	int ErrorCode;	/* required element of type xsd:int */
};
#endif

#ifndef SOAP_TYPE_ns1__RequestDetailedCrackingInfo
#define SOAP_TYPE_ns1__RequestDetailedCrackingInfo (81)
/* ns1:RequestDetailedCrackingInfo */
struct ns1__RequestDetailedCrackingInfo
{
public:
	int RequestID;	/* required element of type xsd:int */
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (82)
/* SOAP Header: */
struct SOAP_ENV__Header
{
#ifdef WITH_NOEMPTYSTRUCT
private:
	char dummy;	/* dummy member to enable compilation */
#endif
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (83)
/* SOAP Fault Code: */
struct SOAP_ENV__Code
{
public:
	char *SOAP_ENV__Value;	/* optional element of type xsd:QName */
	struct SOAP_ENV__Code *SOAP_ENV__Subcode;	/* optional element of type SOAP-ENV:Code */
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (85)
/* SOAP-ENV:Detail */
struct SOAP_ENV__Detail
{
public:
	int __type;	/* any type of element <fault> (defined below) */
	void *fault;	/* transient */
	char *__any;
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (88)
/* SOAP-ENV:Reason */
struct SOAP_ENV__Reason
{
public:
	char *SOAP_ENV__Text;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (89)
/* SOAP Fault: */
struct SOAP_ENV__Fault
{
public:
	char *faultcode;	/* optional element of type xsd:QName */
	char *faultstring;	/* optional element of type xsd:string */
	char *faultactor;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *detail;	/* optional element of type SOAP-ENV:Detail */
	struct SOAP_ENV__Code *SOAP_ENV__Code;	/* optional element of type SOAP-ENV:Code */
	struct SOAP_ENV__Reason *SOAP_ENV__Reason;	/* optional element of type SOAP-ENV:Reason */
	char *SOAP_ENV__Node;	/* optional element of type xsd:string */
	char *SOAP_ENV__Role;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *SOAP_ENV__Detail;	/* optional element of type SOAP-ENV:Detail */
};
#endif

/******************************************************************************\
 *                                                                            *
 * Types with Custom Serializers                                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Typedefs                                                                   *
 *                                                                            *
\******************************************************************************/

#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (5)
typedef char *_QName;
#endif

#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (6)
typedef char *_XML;
#endif


/******************************************************************************\
 *                                                                            *
 * Typedef Synonyms                                                           *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Service Operations                                                         *
 *                                                                            *
\******************************************************************************/


SOAP_FMAC5 int SOAP_FMAC6 ns1__RegisterNewClient(struct soap*, ns1__MachineInfo *MachineInfo, struct ns1__RegisterNewClientResponse &_param_1);

SOAP_FMAC5 int SOAP_FMAC6 ns1__RequestWork(struct soap*, ns1__MachineInfo *MachineInfo, int NumPieces, struct ns1__RequestWorkResponse &_param_2);

SOAP_FMAC5 int SOAP_FMAC6 ns1__UploadCompletedWork(struct soap*, int PartID, xsd__base64Binary Data, struct ns1__UploadCompletedWorkResponse &_param_3);

SOAP_FMAC5 int SOAP_FMAC6 ns1__RequestHashToIndex(struct soap*, ns1__MachineInfo *MachineInfo, unsigned int NumHashes, unsigned int RecievePublicHashes, struct ns1__RequestHashToIndexResponse &_param_4);

SOAP_FMAC5 int SOAP_FMAC6 ns1__UploadHashIndexList(struct soap*, ns1__MachineInfo *MachineInfo, unsigned int RequestID, std::string IndiceList, struct ns1__UploadHashIndexListResponse &_param_5);

SOAP_FMAC5 int SOAP_FMAC6 ns1__RequestChainCheck(struct soap*, ns1__MachineInfo *MachineInfo, unsigned int NumHashes, unsigned int RecievePublicHashes, struct ns1__RequestChainCheckResponse &_param_6);

SOAP_FMAC5 int SOAP_FMAC6 ns1__SendChainCheckResult(struct soap*, ns1__MachineInfo *MachineInfo, unsigned int RequestID, std::string Password, struct ns1__SendChainCheckResultResponse &_param_7);

SOAP_FMAC5 int SOAP_FMAC6 ns1__ReportError(struct soap*, ns1__MachineInfo *MachineInfo, std::string ErrorString, struct ns1__ReportErrorResponse &_param_8);

SOAP_FMAC5 int SOAP_FMAC6 ns1__RequestDetailedCrackingInfo(struct soap*, int RequestID, struct ns1__RequestDetailedCrackingInfoResponse &_param_9);

/******************************************************************************\
 *                                                                            *
 * Stubs                                                                      *
 *                                                                            *
\******************************************************************************/


SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns1__RegisterNewClient(struct soap *soap, const char *soap_endpoint, const char *soap_action, ns1__MachineInfo *MachineInfo, struct ns1__RegisterNewClientResponse &_param_1);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns1__RequestWork(struct soap *soap, const char *soap_endpoint, const char *soap_action, ns1__MachineInfo *MachineInfo, int NumPieces, struct ns1__RequestWorkResponse &_param_2);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns1__UploadCompletedWork(struct soap *soap, const char *soap_endpoint, const char *soap_action, int PartID, xsd__base64Binary Data, struct ns1__UploadCompletedWorkResponse &_param_3);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns1__RequestHashToIndex(struct soap *soap, const char *soap_endpoint, const char *soap_action, ns1__MachineInfo *MachineInfo, unsigned int NumHashes, unsigned int RecievePublicHashes, struct ns1__RequestHashToIndexResponse &_param_4);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns1__UploadHashIndexList(struct soap *soap, const char *soap_endpoint, const char *soap_action, ns1__MachineInfo *MachineInfo, unsigned int RequestID, std::string IndiceList, struct ns1__UploadHashIndexListResponse &_param_5);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns1__RequestChainCheck(struct soap *soap, const char *soap_endpoint, const char *soap_action, ns1__MachineInfo *MachineInfo, unsigned int NumHashes, unsigned int RecievePublicHashes, struct ns1__RequestChainCheckResponse &_param_6);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns1__SendChainCheckResult(struct soap *soap, const char *soap_endpoint, const char *soap_action, ns1__MachineInfo *MachineInfo, unsigned int RequestID, std::string Password, struct ns1__SendChainCheckResultResponse &_param_7);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns1__ReportError(struct soap *soap, const char *soap_endpoint, const char *soap_action, ns1__MachineInfo *MachineInfo, std::string ErrorString, struct ns1__ReportErrorResponse &_param_8);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns1__RequestDetailedCrackingInfo(struct soap *soap, const char *soap_endpoint, const char *soap_action, int RequestID, struct ns1__RequestDetailedCrackingInfoResponse &_param_9);

/******************************************************************************\
 *                                                                            *
 * Skeletons                                                                  *
 *                                                                            *
\******************************************************************************/

SOAP_FMAC5 int SOAP_FMAC6 soap_serve(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_request(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns1__RegisterNewClient(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns1__RequestWork(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns1__UploadCompletedWork(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns1__RequestHashToIndex(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns1__UploadHashIndexList(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns1__RequestChainCheck(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns1__SendChainCheckResult(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns1__ReportError(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns1__RequestDetailedCrackingInfo(struct soap*);

#endif

/* End of soapStub.h */
