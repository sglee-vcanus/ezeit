// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "ThriftRWService.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using namespace  ::thrift_gen;

class ThriftRWServiceHandler : virtual public ThriftRWServiceIf {
 public:
  ThriftRWServiceHandler() {
    // Your initialization goes here
  }

  bool ping() {
    // Your implementation goes here
    printf("ping\n");
  }

  void writeThriftMessage(std::string& _return, const ThriftMessage& _v) {
    // Your implementation goes here
    printf("writeThriftMessage\n");
  }

  void writeBool(std::string& _return, const std::string& _id, const bool _v) {
    // Your implementation goes here
    printf("writeBool\n");
  }

  void writeI16(std::string& _return, const std::string& _id, const int16_t _v) {
    // Your implementation goes here
    printf("writeI16\n");
  }

  void writeI32(std::string& _return, const std::string& _id, const int32_t _v) {
    // Your implementation goes here
    printf("writeI32\n");
  }

  void writeI64(std::string& _return, const std::string& _id, const int64_t _v) {
    // Your implementation goes here
    printf("writeI64\n");
  }

  void writeDouble(std::string& _return, const std::string& _id, const double _v) {
    // Your implementation goes here
    printf("writeDouble\n");
  }

  void writeString(std::string& _return, const std::string& _id, const std::string& _v) {
    // Your implementation goes here
    printf("writeString\n");
  }

  void readThriftMessage(ThriftMessage& _return, const std::string& _id) {
    // Your implementation goes here
    printf("readThriftMessage\n");
  }

  bool readBool(const std::string& _id) {
    // Your implementation goes here
    printf("readBool\n");
  }

  int16_t readI16(const std::string& _id) {
    // Your implementation goes here
    printf("readI16\n");
  }

  int32_t readI32(const std::string& _id) {
    // Your implementation goes here
    printf("readI32\n");
  }

  int64_t readI64(const std::string& _id) {
    // Your implementation goes here
    printf("readI64\n");
  }

  double readDouble(const std::string& _id) {
    // Your implementation goes here
    printf("readDouble\n");
  }

  void readString(std::string& _return, const std::string& _id) {
    // Your implementation goes here
    printf("readString\n");
  }

  bool writeId(const std::string& _id) {
    // Your implementation goes here
    printf("writeId\n");
  }

  void readId(std::vector<std::string> & _return) {
    // Your implementation goes here
    printf("readId\n");
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  ::apache::thrift::stdcxx::shared_ptr<ThriftRWServiceHandler> handler(new ThriftRWServiceHandler());
  ::apache::thrift::stdcxx::shared_ptr<TProcessor> processor(new ThriftRWServiceProcessor(handler));
  ::apache::thrift::stdcxx::shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  ::apache::thrift::stdcxx::shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  ::apache::thrift::stdcxx::shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}

