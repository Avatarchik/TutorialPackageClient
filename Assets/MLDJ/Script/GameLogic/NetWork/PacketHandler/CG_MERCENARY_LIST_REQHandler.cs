//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class CG_MERCENARY_LIST_REQHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 CG_MERCENARY_LIST_REQ packet = (CG_MERCENARY_LIST_REQ )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }