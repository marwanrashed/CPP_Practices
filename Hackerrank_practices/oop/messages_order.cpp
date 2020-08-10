#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Message {
    std::string _text;
    int _id;

public: 

    Message() {}
    const string& get_text() {
        return _text;
    }

    void set_text (string text) {_text = text;}
    void set_id (int id) {_id = id;}
    bool operator < (Message a){
        
        return this->_id < a._id;
    }
};

class MessageFactory {
    private:
    static int _id ;
public:
    MessageFactory() {
    }
    Message create_message(const string& text) {
        _id++;
        Message message;
        message.set_text(text);
        message.set_id(_id);
        return message;
    }
};
int MessageFactory::_id = 0;

class Recipient {
public:
    Recipient() {}
    void receive(const Message& msg) {
        messages_.push_back(msg);
    }
    void print_messages() {
        fix_order();
        for (auto& msg : messages_) {
            cout << msg.get_text() << endl;
        }
        messages_.clear();
    }
private:
    void fix_order() {
        sort(messages_.begin(), messages_.end());
    }
    vector<Message> messages_;
};

class Network {
public:
    static void send_messages(vector<Message> messages, Recipient& recipient) {
    // simulates the unpredictable network, where sent messages might arrive in unspecified order
        random_shuffle(messages.begin(), messages.end());         
        for (auto msg : messages) {
            recipient.receive(msg);
        }
    }
};



int main() {
    MessageFactory message_factory;
    Recipient recipient;
    vector<Message> messages;
    string text;
    while (getline(cin, text)) {
        messages.push_back(message_factory.create_message(text));
    }
    Network::send_messages(messages, recipient);
    recipient.print_messages();
}

