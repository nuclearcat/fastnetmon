#pragma once
#include <cstdint>
#include <string>
const char* get_ip_protocol_name_by_number_iana(uint8_t protocol_number);
enum class ip_protocol_t : uint8_t {
    HOPOPT           = 0,
    ICMP             = 1,
    IGMP             = 2,
    GGP              = 3,
    IPV4             = 4,
    ST               = 5,
    TCP              = 6,
    CBT              = 7,
    EGP              = 8,
    IGP              = 9,
    BBN_RCC_MON      = 10,
    NVP_II           = 11,
    PUP              = 12,
    ARGUS_DEPRECATED = 13,
    EMCON            = 14,
    XNET             = 15,
    CHAOS            = 16,
    UDP              = 17,
    MUX              = 18,
    DCN_MEAS         = 19,
    HMP              = 20,
    PRM              = 21,
    XNS_IDP          = 22,
    TRUNK_1          = 23,
    TRUNK_2          = 24,
    LEAF_1           = 25,
    LEAF_2           = 26,
    RDP              = 27,
    IRTP             = 28,
    ISO_TP4          = 29,
    NETBLT           = 30,
    MFE_NSP          = 31,
    MERIT_INP        = 32,
    DCCP             = 33,
    THREEPC          = 34,
    IDPR             = 35,
    XTP              = 36,
    DDP              = 37,
    IDPR_CMTP        = 38,
    TPPPPP           = 39,
    IL               = 40,
    IPV6             = 41,
    SDRP             = 42,
    IPV6_ROUTE       = 43,
    IPV6_FRAG        = 44,
    IDRP             = 45,
    RSVP             = 46,
    GRE              = 47,
    DSR              = 48,
    BNA              = 49,
    ESP              = 50,
    AH               = 51,
    I_NLSP           = 52,
    SWIPE_DEPRECATED = 53,
    NARP             = 54,
    MOBILE           = 55,
    TLSP             = 56,
    SKIP             = 57,
    IPV6_ICMP        = 58,
    IPV6_NONXT       = 59,
    IPV6_OPTS        = 60,
    UNKNOWN_61       = 61,
    CFTP             = 62,
    UNKNOWN_63       = 63,
    SAT_EXPAK        = 64,
    KRYPTOLAN        = 65,
    RVD              = 66,
    IPPC             = 67,
    UNKNOWN_68       = 68,
    SAT_MON          = 69,
    VISA             = 70,
    IPCV             = 71,
    CPNX             = 72,
    CPHB             = 73,
    WSN              = 74,
    PVP              = 75,
    BR_SAT_MON       = 76,
    SUN_ND           = 77,
    WB_MON           = 78,
    WB_EXPAK         = 79,
    ISO_IP           = 80,
    VMTP             = 81,
    SECURE_VMTP      = 82,
    VINES            = 83,
    IPTM_OR_TTP      = 84,
    NSFNET_IGP       = 85,
    DGP              = 86,
    TCF              = 87,
    EIGRP            = 88,
    OSPFIGP          = 89,
    SPRITE_RPC       = 90,
    LARP             = 91,
    MTP              = 92,
    AX_25            = 93,
    IPIP             = 94,
    MICP_DEPRECATED  = 95,
    SCC_SP           = 96,
    ETHERIP          = 97,
    ENCAP            = 98,
    UNKNOWN_99       = 99,
    GMTP             = 100,
    IFMP             = 101,
    PNNI             = 102,
    PIM              = 103,
    ARIS             = 104,
    SCPS             = 105,
    QNX              = 106,
    A_N              = 107,
    IPCOMP           = 108,
    SNP              = 109,
    COMPAQ_PEER      = 110,
    IPX_IN_IP        = 111,
    VRRP             = 112,
    PGM              = 113,
    UNKNOWN_114      = 114,
    L2TP             = 115,
    DDX              = 116,
    IATP             = 117,
    STP              = 118,
    SRP              = 119,
    UTI              = 120,
    SMP              = 121,
    SM_DEPRECATED    = 122,
    PTP              = 123,
    ISISOVERIPV4     = 124,
    FIRE             = 125,
    CRTP             = 126,
    CRUDP            = 127,
    SSCOPMCE         = 128,
    IPLT             = 129,
    SPS              = 130,
    PIPE             = 131,
    SCTP             = 132,
    FC               = 133,
    RSVP_E2E_IGNORE  = 134,
    MOBILITYHEADER   = 135,
    UDPLITE          = 136,
    MPLS_IN_IP       = 137,
    MANET            = 138,
    HIP              = 139,
    SHIM6            = 140,
    WESP             = 141,
    ROHC             = 142,
    ETHERNET         = 143,
    UNASSIGNED_144   = 144,
    UNASSIGNED_145   = 145,
    UNASSIGNED_146   = 146,
    UNASSIGNED_147   = 147,
    UNASSIGNED_148   = 148,
    UNASSIGNED_149   = 149,
    UNASSIGNED_150   = 150,
    UNASSIGNED_151   = 151,
    UNASSIGNED_152   = 152,
    UNASSIGNED_153   = 153,
    UNASSIGNED_154   = 154,
    UNASSIGNED_155   = 155,
    UNASSIGNED_156   = 156,
    UNASSIGNED_157   = 157,
    UNASSIGNED_158   = 158,
    UNASSIGNED_159   = 159,
    UNASSIGNED_160   = 160,
    UNASSIGNED_161   = 161,
    UNASSIGNED_162   = 162,
    UNASSIGNED_163   = 163,
    UNASSIGNED_164   = 164,
    UNASSIGNED_165   = 165,
    UNASSIGNED_166   = 166,
    UNASSIGNED_167   = 167,
    UNASSIGNED_168   = 168,
    UNASSIGNED_169   = 169,
    UNASSIGNED_170   = 170,
    UNASSIGNED_171   = 171,
    UNASSIGNED_172   = 172,
    UNASSIGNED_173   = 173,
    UNASSIGNED_174   = 174,
    UNASSIGNED_175   = 175,
    UNASSIGNED_176   = 176,
    UNASSIGNED_177   = 177,
    UNASSIGNED_178   = 178,
    UNASSIGNED_179   = 179,
    UNASSIGNED_180   = 180,
    UNASSIGNED_181   = 181,
    UNASSIGNED_182   = 182,
    UNASSIGNED_183   = 183,
    UNASSIGNED_184   = 184,
    UNASSIGNED_185   = 185,
    UNASSIGNED_186   = 186,
    UNASSIGNED_187   = 187,
    UNASSIGNED_188   = 188,
    UNASSIGNED_189   = 189,
    UNASSIGNED_190   = 190,
    UNASSIGNED_191   = 191,
    UNASSIGNED_192   = 192,
    UNASSIGNED_193   = 193,
    UNASSIGNED_194   = 194,
    UNASSIGNED_195   = 195,
    UNASSIGNED_196   = 196,
    UNASSIGNED_197   = 197,
    UNASSIGNED_198   = 198,
    UNASSIGNED_199   = 199,
    UNASSIGNED_200   = 200,
    UNASSIGNED_201   = 201,
    UNASSIGNED_202   = 202,
    UNASSIGNED_203   = 203,
    UNASSIGNED_204   = 204,
    UNASSIGNED_205   = 205,
    UNASSIGNED_206   = 206,
    UNASSIGNED_207   = 207,
    UNASSIGNED_208   = 208,
    UNASSIGNED_209   = 209,
    UNASSIGNED_210   = 210,
    UNASSIGNED_211   = 211,
    UNASSIGNED_212   = 212,
    UNASSIGNED_213   = 213,
    UNASSIGNED_214   = 214,
    UNASSIGNED_215   = 215,
    UNASSIGNED_216   = 216,
    UNASSIGNED_217   = 217,
    UNASSIGNED_218   = 218,
    UNASSIGNED_219   = 219,
    UNASSIGNED_220   = 220,
    UNASSIGNED_221   = 221,
    UNASSIGNED_222   = 222,
    UNASSIGNED_223   = 223,
    UNASSIGNED_224   = 224,
    UNASSIGNED_225   = 225,
    UNASSIGNED_226   = 226,
    UNASSIGNED_227   = 227,
    UNASSIGNED_228   = 228,
    UNASSIGNED_229   = 229,
    UNASSIGNED_230   = 230,
    UNASSIGNED_231   = 231,
    UNASSIGNED_232   = 232,
    UNASSIGNED_233   = 233,
    UNASSIGNED_234   = 234,
    UNASSIGNED_235   = 235,
    UNASSIGNED_236   = 236,
    UNASSIGNED_237   = 237,
    UNASSIGNED_238   = 238,
    UNASSIGNED_239   = 239,
    UNASSIGNED_240   = 240,
    UNASSIGNED_241   = 241,
    UNASSIGNED_242   = 242,
    UNASSIGNED_243   = 243,
    UNASSIGNED_244   = 244,
    UNASSIGNED_245   = 245,
    UNASSIGNED_246   = 246,
    UNASSIGNED_247   = 247,
    UNASSIGNED_248   = 248,
    UNASSIGNED_249   = 249,
    UNASSIGNED_250   = 250,
    UNASSIGNED_251   = 251,
    UNASSIGNED_252   = 252,
    UNKNOWN_253      = 253,
    UNKNOWN_254      = 254,
    RESERVED         = 255
};


enum IpProtocolNumberNotTyped : unsigned int {
    IpProtocolNumberHOPOPT           = 0,
    IpProtocolNumberICMP             = 1,
    IpProtocolNumberIGMP             = 2,
    IpProtocolNumberGGP              = 3,
    IpProtocolNumberIPV4             = 4,
    IpProtocolNumberST               = 5,
    IpProtocolNumberTCP              = 6,
    IpProtocolNumberCBT              = 7,
    IpProtocolNumberEGP              = 8,
    IpProtocolNumberIGP              = 9,
    IpProtocolNumberBBN_RCC_MON      = 10,
    IpProtocolNumberNVP_II           = 11,
    IpProtocolNumberPUP              = 12,
    IpProtocolNumberARGUS_DEPRECATED = 13,
    IpProtocolNumberEMCON            = 14,
    IpProtocolNumberXNET             = 15,
    IpProtocolNumberCHAOS            = 16,
    IpProtocolNumberUDP              = 17,
    IpProtocolNumberMUX              = 18,
    IpProtocolNumberDCN_MEAS         = 19,
    IpProtocolNumberHMP              = 20,
    IpProtocolNumberPRM              = 21,
    IpProtocolNumberXNS_IDP          = 22,
    IpProtocolNumberTRUNK_1          = 23,
    IpProtocolNumberTRUNK_2          = 24,
    IpProtocolNumberLEAF_1           = 25,
    IpProtocolNumberLEAF_2           = 26,
    IpProtocolNumberRDP              = 27,
    IpProtocolNumberIRTP             = 28,
    IpProtocolNumberISO_TP4          = 29,
    IpProtocolNumberNETBLT           = 30,
    IpProtocolNumberMFE_NSP          = 31,
    IpProtocolNumberMERIT_INP        = 32,
    IpProtocolNumberDCCP             = 33,
    IpProtocolNumberTHREEPC          = 34,
    IpProtocolNumberIDPR             = 35,
    IpProtocolNumberXTP              = 36,
    IpProtocolNumberDDP              = 37,
    IpProtocolNumberIDPR_CMTP        = 38,
    IpProtocolNumberTPPPPP           = 39,
    IpProtocolNumberIL               = 40,
    IpProtocolNumberIPV6             = 41,
    IpProtocolNumberSDRP             = 42,
    IpProtocolNumberIPV6_ROUTE       = 43,
    IpProtocolNumberIPV6_FRAG        = 44,
    IpProtocolNumberIDRP             = 45,
    IpProtocolNumberRSVP             = 46,
    IpProtocolNumberGRE              = 47,
    IpProtocolNumberDSR              = 48,
    IpProtocolNumberBNA              = 49,
    IpProtocolNumberESP              = 50,
    IpProtocolNumberAH               = 51,
    IpProtocolNumberI_NLSP           = 52,
    IpProtocolNumberSWIPE_DEPRECATED = 53,
    IpProtocolNumberNARP             = 54,
    IpProtocolNumberMOBILE           = 55,
    IpProtocolNumberTLSP             = 56,
    IpProtocolNumberSKIP             = 57,
    IpProtocolNumberIPV6_ICMP        = 58,
    IpProtocolNumberIPV6_NONXT       = 59,
    IpProtocolNumberIPV6_OPTS        = 60,
    IpProtocolNumberUNKNOWN_61       = 61,
    IpProtocolNumberCFTP             = 62,
    IpProtocolNumberUNKNOWN_63       = 63,
    IpProtocolNumberSAT_EXPAK        = 64,
    IpProtocolNumberKRYPTOLAN        = 65,
    IpProtocolNumberRVD              = 66,
    IpProtocolNumberIPPC             = 67,
    IpProtocolNumberUNKNOWN_68       = 68,
    IpProtocolNumberSAT_MON          = 69,
    IpProtocolNumberVISA             = 70,
    IpProtocolNumberIPCV             = 71,
    IpProtocolNumberCPNX             = 72,
    IpProtocolNumberCPHB             = 73,
    IpProtocolNumberWSN              = 74,
    IpProtocolNumberPVP              = 75,
    IpProtocolNumberBR_SAT_MON       = 76,
    IpProtocolNumberSUN_ND           = 77,
    IpProtocolNumberWB_MON           = 78,
    IpProtocolNumberWB_EXPAK         = 79,
    IpProtocolNumberISO_IP           = 80,
    IpProtocolNumberVMTP             = 81,
    IpProtocolNumberSECURE_VMTP      = 82,
    IpProtocolNumberVINES            = 83,
    IpProtocolNumberIPTM_OR_TTP      = 84,
    IpProtocolNumberNSFNET_IGP       = 85,
    IpProtocolNumberDGP              = 86,
    IpProtocolNumberTCF              = 87,
    IpProtocolNumberEIGRP            = 88,
    IpProtocolNumberOSPFIGP          = 89,
    IpProtocolNumberSPRITE_RPC       = 90,
    IpProtocolNumberLARP             = 91,
    IpProtocolNumberMTP              = 92,
    IpProtocolNumberAX_25            = 93,
    IpProtocolNumberIPIP             = 94,
    IpProtocolNumberMICP_DEPRECATED  = 95,
    IpProtocolNumberSCC_SP           = 96,
    IpProtocolNumberETHERIP          = 97,
    IpProtocolNumberENCAP            = 98,
    IpProtocolNumberUNKNOWN_99       = 99,
    IpProtocolNumberGMTP             = 100,
    IpProtocolNumberIFMP             = 101,
    IpProtocolNumberPNNI             = 102,
    IpProtocolNumberPIM              = 103,
    IpProtocolNumberARIS             = 104,
    IpProtocolNumberSCPS             = 105,
    IpProtocolNumberQNX              = 106,
    IpProtocolNumberA_N              = 107,
    IpProtocolNumberIPCOMP           = 108,
    IpProtocolNumberSNP              = 109,
    IpProtocolNumberCOMPAQ_PEER      = 110,
    IpProtocolNumberIPX_IN_IP        = 111,
    IpProtocolNumberVRRP             = 112,
    IpProtocolNumberPGM              = 113,
    IpProtocolNumberUNKNOWN_114      = 114,
    IpProtocolNumberL2TP             = 115,
    IpProtocolNumberDDX              = 116,
    IpProtocolNumberIATP             = 117,
    IpProtocolNumberSTP              = 118,
    IpProtocolNumberSRP              = 119,
    IpProtocolNumberUTI              = 120,
    IpProtocolNumberSMP              = 121,
    IpProtocolNumberSM_DEPRECATED    = 122,
    IpProtocolNumberPTP              = 123,
    IpProtocolNumberISISOVERIPV4     = 124,
    IpProtocolNumberFIRE             = 125,
    IpProtocolNumberCRTP             = 126,
    IpProtocolNumberCRUDP            = 127,
    IpProtocolNumberSSCOPMCE         = 128,
    IpProtocolNumberIPLT             = 129,
    IpProtocolNumberSPS              = 130,
    IpProtocolNumberPIPE             = 131,
    IpProtocolNumberSCTP             = 132,
    IpProtocolNumberFC               = 133,
    IpProtocolNumberRSVP_E2E_IGNORE  = 134,
    IpProtocolNumberMOBILITYHEADER   = 135,
    IpProtocolNumberUDPLITE          = 136,
    IpProtocolNumberMPLS_IN_IP       = 137,
    IpProtocolNumberMANET            = 138,
    IpProtocolNumberHIP              = 139,
    IpProtocolNumberSHIM6            = 140,
    IpProtocolNumberWESP             = 141,
    IpProtocolNumberROHC             = 142,
    IpProtocolNumberETHERNET         = 143,
    IpProtocolNumberUNASSIGNED_144   = 144,
    IpProtocolNumberUNASSIGNED_145   = 145,
    IpProtocolNumberUNASSIGNED_146   = 146,
    IpProtocolNumberUNASSIGNED_147   = 147,
    IpProtocolNumberUNASSIGNED_148   = 148,
    IpProtocolNumberUNASSIGNED_149   = 149,
    IpProtocolNumberUNASSIGNED_150   = 150,
    IpProtocolNumberUNASSIGNED_151   = 151,
    IpProtocolNumberUNASSIGNED_152   = 152,
    IpProtocolNumberUNASSIGNED_153   = 153,
    IpProtocolNumberUNASSIGNED_154   = 154,
    IpProtocolNumberUNASSIGNED_155   = 155,
    IpProtocolNumberUNASSIGNED_156   = 156,
    IpProtocolNumberUNASSIGNED_157   = 157,
    IpProtocolNumberUNASSIGNED_158   = 158,
    IpProtocolNumberUNASSIGNED_159   = 159,
    IpProtocolNumberUNASSIGNED_160   = 160,
    IpProtocolNumberUNASSIGNED_161   = 161,
    IpProtocolNumberUNASSIGNED_162   = 162,
    IpProtocolNumberUNASSIGNED_163   = 163,
    IpProtocolNumberUNASSIGNED_164   = 164,
    IpProtocolNumberUNASSIGNED_165   = 165,
    IpProtocolNumberUNASSIGNED_166   = 166,
    IpProtocolNumberUNASSIGNED_167   = 167,
    IpProtocolNumberUNASSIGNED_168   = 168,
    IpProtocolNumberUNASSIGNED_169   = 169,
    IpProtocolNumberUNASSIGNED_170   = 170,
    IpProtocolNumberUNASSIGNED_171   = 171,
    IpProtocolNumberUNASSIGNED_172   = 172,
    IpProtocolNumberUNASSIGNED_173   = 173,
    IpProtocolNumberUNASSIGNED_174   = 174,
    IpProtocolNumberUNASSIGNED_175   = 175,
    IpProtocolNumberUNASSIGNED_176   = 176,
    IpProtocolNumberUNASSIGNED_177   = 177,
    IpProtocolNumberUNASSIGNED_178   = 178,
    IpProtocolNumberUNASSIGNED_179   = 179,
    IpProtocolNumberUNASSIGNED_180   = 180,
    IpProtocolNumberUNASSIGNED_181   = 181,
    IpProtocolNumberUNASSIGNED_182   = 182,
    IpProtocolNumberUNASSIGNED_183   = 183,
    IpProtocolNumberUNASSIGNED_184   = 184,
    IpProtocolNumberUNASSIGNED_185   = 185,
    IpProtocolNumberUNASSIGNED_186   = 186,
    IpProtocolNumberUNASSIGNED_187   = 187,
    IpProtocolNumberUNASSIGNED_188   = 188,
    IpProtocolNumberUNASSIGNED_189   = 189,
    IpProtocolNumberUNASSIGNED_190   = 190,
    IpProtocolNumberUNASSIGNED_191   = 191,
    IpProtocolNumberUNASSIGNED_192   = 192,
    IpProtocolNumberUNASSIGNED_193   = 193,
    IpProtocolNumberUNASSIGNED_194   = 194,
    IpProtocolNumberUNASSIGNED_195   = 195,
    IpProtocolNumberUNASSIGNED_196   = 196,
    IpProtocolNumberUNASSIGNED_197   = 197,
    IpProtocolNumberUNASSIGNED_198   = 198,
    IpProtocolNumberUNASSIGNED_199   = 199,
    IpProtocolNumberUNASSIGNED_200   = 200,
    IpProtocolNumberUNASSIGNED_201   = 201,
    IpProtocolNumberUNASSIGNED_202   = 202,
    IpProtocolNumberUNASSIGNED_203   = 203,
    IpProtocolNumberUNASSIGNED_204   = 204,
    IpProtocolNumberUNASSIGNED_205   = 205,
    IpProtocolNumberUNASSIGNED_206   = 206,
    IpProtocolNumberUNASSIGNED_207   = 207,
    IpProtocolNumberUNASSIGNED_208   = 208,
    IpProtocolNumberUNASSIGNED_209   = 209,
    IpProtocolNumberUNASSIGNED_210   = 210,
    IpProtocolNumberUNASSIGNED_211   = 211,
    IpProtocolNumberUNASSIGNED_212   = 212,
    IpProtocolNumberUNASSIGNED_213   = 213,
    IpProtocolNumberUNASSIGNED_214   = 214,
    IpProtocolNumberUNASSIGNED_215   = 215,
    IpProtocolNumberUNASSIGNED_216   = 216,
    IpProtocolNumberUNASSIGNED_217   = 217,
    IpProtocolNumberUNASSIGNED_218   = 218,
    IpProtocolNumberUNASSIGNED_219   = 219,
    IpProtocolNumberUNASSIGNED_220   = 220,
    IpProtocolNumberUNASSIGNED_221   = 221,
    IpProtocolNumberUNASSIGNED_222   = 222,
    IpProtocolNumberUNASSIGNED_223   = 223,
    IpProtocolNumberUNASSIGNED_224   = 224,
    IpProtocolNumberUNASSIGNED_225   = 225,
    IpProtocolNumberUNASSIGNED_226   = 226,
    IpProtocolNumberUNASSIGNED_227   = 227,
    IpProtocolNumberUNASSIGNED_228   = 228,
    IpProtocolNumberUNASSIGNED_229   = 229,
    IpProtocolNumberUNASSIGNED_230   = 230,
    IpProtocolNumberUNASSIGNED_231   = 231,
    IpProtocolNumberUNASSIGNED_232   = 232,
    IpProtocolNumberUNASSIGNED_233   = 233,
    IpProtocolNumberUNASSIGNED_234   = 234,
    IpProtocolNumberUNASSIGNED_235   = 235,
    IpProtocolNumberUNASSIGNED_236   = 236,
    IpProtocolNumberUNASSIGNED_237   = 237,
    IpProtocolNumberUNASSIGNED_238   = 238,
    IpProtocolNumberUNASSIGNED_239   = 239,
    IpProtocolNumberUNASSIGNED_240   = 240,
    IpProtocolNumberUNASSIGNED_241   = 241,
    IpProtocolNumberUNASSIGNED_242   = 242,
    IpProtocolNumberUNASSIGNED_243   = 243,
    IpProtocolNumberUNASSIGNED_244   = 244,
    IpProtocolNumberUNASSIGNED_245   = 245,
    IpProtocolNumberUNASSIGNED_246   = 246,
    IpProtocolNumberUNASSIGNED_247   = 247,
    IpProtocolNumberUNASSIGNED_248   = 248,
    IpProtocolNumberUNASSIGNED_249   = 249,
    IpProtocolNumberUNASSIGNED_250   = 250,
    IpProtocolNumberUNASSIGNED_251   = 251,
    IpProtocolNumberUNASSIGNED_252   = 252,
    IpProtocolNumberUNKNOWN_253      = 253,
    IpProtocolNumberUNKNOWN_254      = 254,
    IpProtocolNumberRESERVED         = 255,
};
ip_protocol_t get_ip_protocol_enum_type_from_integer(uint8_t protocol_as_integer);
uint8_t get_ip_protocol_enum_as_number(ip_protocol_t ip_protocol_enum);
const char* get_ip_protocol_name(ip_protocol_t protocol);
bool read_protocol_from_string(const std::string& protocol_string, ip_protocol_t& ip_protocol_enum);
