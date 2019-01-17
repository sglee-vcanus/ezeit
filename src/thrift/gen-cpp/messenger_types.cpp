/**
 * Autogenerated by Thrift Compiler (1.0.0-dev)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "messenger_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace thrift_gen {


Message::~Message() throw() {
}


void Message::__set_sender_id(const std::string& val) {
  this->sender_id = val;
}

void Message::__set_receiver_id(const std::string& val) {
  this->receiver_id = val;
__isset.receiver_id = true;
}

void Message::__set_timestamp(const std::string& val) {
  this->timestamp = val;
__isset.timestamp = true;
}

void Message::__set_subject(const std::string& val) {
  this->subject = val;
__isset.subject = true;
}

void Message::__set_sequence_no(const int64_t val) {
  this->sequence_no = val;
__isset.sequence_no = true;
}

void Message::__set_total_count(const int64_t val) {
  this->total_count = val;
__isset.total_count = true;
}

void Message::__set_list_bool(const std::vector<bool> & val) {
  this->list_bool = val;
__isset.list_bool = true;
}

void Message::__set_list_i16(const std::vector<int16_t> & val) {
  this->list_i16 = val;
__isset.list_i16 = true;
}

void Message::__set_list_i32(const std::vector<int32_t> & val) {
  this->list_i32 = val;
__isset.list_i32 = true;
}

void Message::__set_list_i64(const std::vector<int64_t> & val) {
  this->list_i64 = val;
__isset.list_i64 = true;
}

void Message::__set_list_double(const std::vector<double> & val) {
  this->list_double = val;
__isset.list_double = true;
}

void Message::__set_list_string(const std::vector<std::string> & val) {
  this->list_string = val;
__isset.list_string = true;
}

void Message::__set_binary_value(const std::string& val) {
  this->binary_value = val;
__isset.binary_value = true;
}

void Message::__set_payload(const std::string& val) {
  this->payload = val;
__isset.payload = true;
}

void Message::__set_list_message(const std::vector<Message> & val) {
  this->list_message = val;
__isset.list_message = true;
}

void Message::__set_set_message(const std::set<Message> & val) {
  this->set_message = val;
__isset.set_message = true;
}

void Message::__set_map_message(const std::map<std::string, Message> & val) {
  this->map_message = val;
__isset.map_message = true;
}
std::ostream& operator<<(std::ostream& out, const Message& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t Message::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_sender_id = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->sender_id);
          isset_sender_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->receiver_id);
          this->__isset.receiver_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->timestamp);
          this->__isset.timestamp = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->subject);
          this->__isset.subject = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->sequence_no);
          this->__isset.sequence_no = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->total_count);
          this->__isset.total_count = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->list_bool.clear();
            uint32_t _size0;
            ::apache::thrift::protocol::TType _etype3;
            xfer += iprot->readListBegin(_etype3, _size0);
            this->list_bool.resize(_size0);
            uint32_t _i4;
            for (_i4 = 0; _i4 < _size0; ++_i4)
            {
              xfer += iprot->readBool(this->list_bool[_i4]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.list_bool = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->list_i16.clear();
            uint32_t _size5;
            ::apache::thrift::protocol::TType _etype8;
            xfer += iprot->readListBegin(_etype8, _size5);
            this->list_i16.resize(_size5);
            uint32_t _i9;
            for (_i9 = 0; _i9 < _size5; ++_i9)
            {
              xfer += iprot->readI16(this->list_i16[_i9]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.list_i16 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 9:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->list_i32.clear();
            uint32_t _size10;
            ::apache::thrift::protocol::TType _etype13;
            xfer += iprot->readListBegin(_etype13, _size10);
            this->list_i32.resize(_size10);
            uint32_t _i14;
            for (_i14 = 0; _i14 < _size10; ++_i14)
            {
              xfer += iprot->readI32(this->list_i32[_i14]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.list_i32 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 10:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->list_i64.clear();
            uint32_t _size15;
            ::apache::thrift::protocol::TType _etype18;
            xfer += iprot->readListBegin(_etype18, _size15);
            this->list_i64.resize(_size15);
            uint32_t _i19;
            for (_i19 = 0; _i19 < _size15; ++_i19)
            {
              xfer += iprot->readI64(this->list_i64[_i19]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.list_i64 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 11:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->list_double.clear();
            uint32_t _size20;
            ::apache::thrift::protocol::TType _etype23;
            xfer += iprot->readListBegin(_etype23, _size20);
            this->list_double.resize(_size20);
            uint32_t _i24;
            for (_i24 = 0; _i24 < _size20; ++_i24)
            {
              xfer += iprot->readDouble(this->list_double[_i24]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.list_double = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 12:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->list_string.clear();
            uint32_t _size25;
            ::apache::thrift::protocol::TType _etype28;
            xfer += iprot->readListBegin(_etype28, _size25);
            this->list_string.resize(_size25);
            uint32_t _i29;
            for (_i29 = 0; _i29 < _size25; ++_i29)
            {
              xfer += iprot->readString(this->list_string[_i29]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.list_string = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 13:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readBinary(this->binary_value);
          this->__isset.binary_value = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 14:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->payload);
          this->__isset.payload = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 15:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->list_message.clear();
            uint32_t _size30;
            ::apache::thrift::protocol::TType _etype33;
            xfer += iprot->readListBegin(_etype33, _size30);
            this->list_message.resize(_size30);
            uint32_t _i34;
            for (_i34 = 0; _i34 < _size30; ++_i34)
            {
              xfer += this->list_message[_i34].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.list_message = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 16:
        if (ftype == ::apache::thrift::protocol::T_SET) {
          {
            this->set_message.clear();
            uint32_t _size35;
            ::apache::thrift::protocol::TType _etype38;
            xfer += iprot->readSetBegin(_etype38, _size35);
            uint32_t _i39;
            for (_i39 = 0; _i39 < _size35; ++_i39)
            {
              Message _elem40;
              xfer += _elem40.read(iprot);
              this->set_message.insert(_elem40);
            }
            xfer += iprot->readSetEnd();
          }
          this->__isset.set_message = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 17:
        if (ftype == ::apache::thrift::protocol::T_MAP) {
          {
            this->map_message.clear();
            uint32_t _size41;
            ::apache::thrift::protocol::TType _ktype42;
            ::apache::thrift::protocol::TType _vtype43;
            xfer += iprot->readMapBegin(_ktype42, _vtype43, _size41);
            uint32_t _i45;
            for (_i45 = 0; _i45 < _size41; ++_i45)
            {
              std::string _key46;
              xfer += iprot->readString(_key46);
              Message& _val47 = this->map_message[_key46];
              xfer += _val47.read(iprot);
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.map_message = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_sender_id)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t Message::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Message");

  xfer += oprot->writeFieldBegin("sender_id", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->sender_id);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.receiver_id) {
    xfer += oprot->writeFieldBegin("receiver_id", ::apache::thrift::protocol::T_STRING, 2);
    xfer += oprot->writeString(this->receiver_id);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.timestamp) {
    xfer += oprot->writeFieldBegin("timestamp", ::apache::thrift::protocol::T_STRING, 3);
    xfer += oprot->writeString(this->timestamp);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.subject) {
    xfer += oprot->writeFieldBegin("subject", ::apache::thrift::protocol::T_STRING, 4);
    xfer += oprot->writeString(this->subject);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.sequence_no) {
    xfer += oprot->writeFieldBegin("sequence_no", ::apache::thrift::protocol::T_I64, 5);
    xfer += oprot->writeI64(this->sequence_no);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.total_count) {
    xfer += oprot->writeFieldBegin("total_count", ::apache::thrift::protocol::T_I64, 6);
    xfer += oprot->writeI64(this->total_count);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.list_bool) {
    xfer += oprot->writeFieldBegin("list_bool", ::apache::thrift::protocol::T_LIST, 7);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_BOOL, static_cast<uint32_t>(this->list_bool.size()));
      std::vector<bool> ::const_iterator _iter48;
      for (_iter48 = this->list_bool.begin(); _iter48 != this->list_bool.end(); ++_iter48)
      {
        xfer += oprot->writeBool((*_iter48));
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.list_i16) {
    xfer += oprot->writeFieldBegin("list_i16", ::apache::thrift::protocol::T_LIST, 8);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_I16, static_cast<uint32_t>(this->list_i16.size()));
      std::vector<int16_t> ::const_iterator _iter49;
      for (_iter49 = this->list_i16.begin(); _iter49 != this->list_i16.end(); ++_iter49)
      {
        xfer += oprot->writeI16((*_iter49));
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.list_i32) {
    xfer += oprot->writeFieldBegin("list_i32", ::apache::thrift::protocol::T_LIST, 9);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_I32, static_cast<uint32_t>(this->list_i32.size()));
      std::vector<int32_t> ::const_iterator _iter50;
      for (_iter50 = this->list_i32.begin(); _iter50 != this->list_i32.end(); ++_iter50)
      {
        xfer += oprot->writeI32((*_iter50));
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.list_i64) {
    xfer += oprot->writeFieldBegin("list_i64", ::apache::thrift::protocol::T_LIST, 10);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_I64, static_cast<uint32_t>(this->list_i64.size()));
      std::vector<int64_t> ::const_iterator _iter51;
      for (_iter51 = this->list_i64.begin(); _iter51 != this->list_i64.end(); ++_iter51)
      {
        xfer += oprot->writeI64((*_iter51));
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.list_double) {
    xfer += oprot->writeFieldBegin("list_double", ::apache::thrift::protocol::T_LIST, 11);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_DOUBLE, static_cast<uint32_t>(this->list_double.size()));
      std::vector<double> ::const_iterator _iter52;
      for (_iter52 = this->list_double.begin(); _iter52 != this->list_double.end(); ++_iter52)
      {
        xfer += oprot->writeDouble((*_iter52));
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.list_string) {
    xfer += oprot->writeFieldBegin("list_string", ::apache::thrift::protocol::T_LIST, 12);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->list_string.size()));
      std::vector<std::string> ::const_iterator _iter53;
      for (_iter53 = this->list_string.begin(); _iter53 != this->list_string.end(); ++_iter53)
      {
        xfer += oprot->writeString((*_iter53));
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.binary_value) {
    xfer += oprot->writeFieldBegin("binary_value", ::apache::thrift::protocol::T_STRING, 13);
    xfer += oprot->writeBinary(this->binary_value);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.payload) {
    xfer += oprot->writeFieldBegin("payload", ::apache::thrift::protocol::T_STRING, 14);
    xfer += oprot->writeString(this->payload);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.list_message) {
    xfer += oprot->writeFieldBegin("list_message", ::apache::thrift::protocol::T_LIST, 15);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->list_message.size()));
      std::vector<Message> ::const_iterator _iter54;
      for (_iter54 = this->list_message.begin(); _iter54 != this->list_message.end(); ++_iter54)
      {
        xfer += (*_iter54).write(oprot);
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.set_message) {
    xfer += oprot->writeFieldBegin("set_message", ::apache::thrift::protocol::T_SET, 16);
    {
      xfer += oprot->writeSetBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->set_message.size()));
      std::set<Message> ::const_iterator _iter55;
      for (_iter55 = this->set_message.begin(); _iter55 != this->set_message.end(); ++_iter55)
      {
        xfer += (*_iter55).write(oprot);
      }
      xfer += oprot->writeSetEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.map_message) {
    xfer += oprot->writeFieldBegin("map_message", ::apache::thrift::protocol::T_MAP, 17);
    {
      xfer += oprot->writeMapBegin(::apache::thrift::protocol::T_STRING, ::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->map_message.size()));
      std::map<std::string, Message> ::const_iterator _iter56;
      for (_iter56 = this->map_message.begin(); _iter56 != this->map_message.end(); ++_iter56)
      {
        xfer += oprot->writeString(_iter56->first);
        xfer += _iter56->second.write(oprot);
      }
      xfer += oprot->writeMapEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Message &a, Message &b) {
  using ::std::swap;
  swap(a.sender_id, b.sender_id);
  swap(a.receiver_id, b.receiver_id);
  swap(a.timestamp, b.timestamp);
  swap(a.subject, b.subject);
  swap(a.sequence_no, b.sequence_no);
  swap(a.total_count, b.total_count);
  swap(a.list_bool, b.list_bool);
  swap(a.list_i16, b.list_i16);
  swap(a.list_i32, b.list_i32);
  swap(a.list_i64, b.list_i64);
  swap(a.list_double, b.list_double);
  swap(a.list_string, b.list_string);
  swap(a.binary_value, b.binary_value);
  swap(a.payload, b.payload);
  swap(a.list_message, b.list_message);
  swap(a.set_message, b.set_message);
  swap(a.map_message, b.map_message);
  swap(a.__isset, b.__isset);
}

Message::Message(const Message& other57) {
  sender_id = other57.sender_id;
  receiver_id = other57.receiver_id;
  timestamp = other57.timestamp;
  subject = other57.subject;
  sequence_no = other57.sequence_no;
  total_count = other57.total_count;
  list_bool = other57.list_bool;
  list_i16 = other57.list_i16;
  list_i32 = other57.list_i32;
  list_i64 = other57.list_i64;
  list_double = other57.list_double;
  list_string = other57.list_string;
  binary_value = other57.binary_value;
  payload = other57.payload;
  list_message = other57.list_message;
  set_message = other57.set_message;
  map_message = other57.map_message;
  __isset = other57.__isset;
}
Message& Message::operator=(const Message& other58) {
  sender_id = other58.sender_id;
  receiver_id = other58.receiver_id;
  timestamp = other58.timestamp;
  subject = other58.subject;
  sequence_no = other58.sequence_no;
  total_count = other58.total_count;
  list_bool = other58.list_bool;
  list_i16 = other58.list_i16;
  list_i32 = other58.list_i32;
  list_i64 = other58.list_i64;
  list_double = other58.list_double;
  list_string = other58.list_string;
  binary_value = other58.binary_value;
  payload = other58.payload;
  list_message = other58.list_message;
  set_message = other58.set_message;
  map_message = other58.map_message;
  __isset = other58.__isset;
  return *this;
}
void Message::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Message(";
  out << "sender_id=" << to_string(sender_id);
  out << ", " << "receiver_id="; (__isset.receiver_id ? (out << to_string(receiver_id)) : (out << "<null>"));
  out << ", " << "timestamp="; (__isset.timestamp ? (out << to_string(timestamp)) : (out << "<null>"));
  out << ", " << "subject="; (__isset.subject ? (out << to_string(subject)) : (out << "<null>"));
  out << ", " << "sequence_no="; (__isset.sequence_no ? (out << to_string(sequence_no)) : (out << "<null>"));
  out << ", " << "total_count="; (__isset.total_count ? (out << to_string(total_count)) : (out << "<null>"));
  out << ", " << "list_bool="; (__isset.list_bool ? (out << to_string(list_bool)) : (out << "<null>"));
  out << ", " << "list_i16="; (__isset.list_i16 ? (out << to_string(list_i16)) : (out << "<null>"));
  out << ", " << "list_i32="; (__isset.list_i32 ? (out << to_string(list_i32)) : (out << "<null>"));
  out << ", " << "list_i64="; (__isset.list_i64 ? (out << to_string(list_i64)) : (out << "<null>"));
  out << ", " << "list_double="; (__isset.list_double ? (out << to_string(list_double)) : (out << "<null>"));
  out << ", " << "list_string="; (__isset.list_string ? (out << to_string(list_string)) : (out << "<null>"));
  out << ", " << "binary_value="; (__isset.binary_value ? (out << to_string(binary_value)) : (out << "<null>"));
  out << ", " << "payload="; (__isset.payload ? (out << to_string(payload)) : (out << "<null>"));
  out << ", " << "list_message="; (__isset.list_message ? (out << to_string(list_message)) : (out << "<null>"));
  out << ", " << "set_message="; (__isset.set_message ? (out << to_string(set_message)) : (out << "<null>"));
  out << ", " << "map_message="; (__isset.map_message ? (out << to_string(map_message)) : (out << "<null>"));
  out << ")";
}


InvalidOperationException::~InvalidOperationException() throw() {
}


void InvalidOperationException::__set_code(const int32_t val) {
  this->code = val;
}

void InvalidOperationException::__set_description(const std::string& val) {
  this->description = val;
}
std::ostream& operator<<(std::ostream& out, const InvalidOperationException& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t InvalidOperationException::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->code);
          this->__isset.code = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->description);
          this->__isset.description = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t InvalidOperationException::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("InvalidOperationException");

  xfer += oprot->writeFieldBegin("code", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->code);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("description", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->description);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(InvalidOperationException &a, InvalidOperationException &b) {
  using ::std::swap;
  swap(a.code, b.code);
  swap(a.description, b.description);
  swap(a.__isset, b.__isset);
}

InvalidOperationException::InvalidOperationException(const InvalidOperationException& other59) : TException() {
  code = other59.code;
  description = other59.description;
  __isset = other59.__isset;
}
InvalidOperationException& InvalidOperationException::operator=(const InvalidOperationException& other60) {
  code = other60.code;
  description = other60.description;
  __isset = other60.__isset;
  return *this;
}
void InvalidOperationException::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "InvalidOperationException(";
  out << "code=" << to_string(code);
  out << ", " << "description=" << to_string(description);
  out << ")";
}

const char* InvalidOperationException::what() const throw() {
  try {
    std::stringstream ss;
    ss << "TException - service has thrown: " << *this;
    this->thriftTExceptionMessageHolder_ = ss.str();
    return this->thriftTExceptionMessageHolder_.c_str();
  } catch (const std::exception&) {
    return "TException - service has thrown: InvalidOperationException";
  }
}

} // namespace