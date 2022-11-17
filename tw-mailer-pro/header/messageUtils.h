#ifndef MESSAGEUTILS
#define MESSAGEUTILS

#include <string>
#include <vector>

/**
 * Utility class for message handling.
 */
class MessageUtils {

    public:

        /**
         * Validates a message received from a socket.
         * @param size the size of the message
         * @return true if the message is valid, false otherwise
         */
        static bool messageIsValid(int size);

        /**
         * Parses a message received from a socket.
         * @param buffer the raw message to parse
         * @param size the size of the message
         * @param message vector to write the parsed message to
         */
        static void parseMessage(char buffer[], int size, std::vector<std::string>& message);
        
        /**
         * Convert message to singular string.
         * @param message the message to convert
         * @return the message as a string
         */
        static std::string toString(std::vector<std::string> message);

    private:
        MessageUtils();
};

#endif // MESSAGEUTILS
