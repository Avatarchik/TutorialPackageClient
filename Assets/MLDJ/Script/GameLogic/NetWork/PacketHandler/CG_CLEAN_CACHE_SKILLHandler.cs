//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class CG_CLEAN_CACHE_SKILLHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 CG_CLEAN_CACHE_SKILL packet = (CG_CLEAN_CACHE_SKILL )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }