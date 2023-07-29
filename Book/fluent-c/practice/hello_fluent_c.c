#define STRING_SIZE 100
#define MAX_KEYS 40

#include <stdio.h>
#include <stdlib.h>

struct Key
{
    char key_name[STRING_SIZE];
    char key_value[STRING_SIZE];
};

/* file-global array holding all registry keys */
static struct Key *key_list[MAX_KEYS];

RegError createKey(char *key_name, RegKey *key)
{
    if (key == NULL)
    {
        return INVALID_KEY;
    }

    if (key_name == NULL)
    {
        return INVALID_STRING;
    }

    if (STRING_SIZE <= strlen(key_name))
    {
        return STRING_TOO_LONG;
    }

    RegKey newKey = calloc(1, sizeof(struct Key));
    if (newKey == NULL)
    {
        return OUT_OF_MEMORY;
    }

    strcpy(newKey->key_name, key_name);
    *key = newKey;
    return OK;
}

RegError storeValue(RegKey key, char *value)
{
    if (key == NULL)
    {
        return INVALID_KEY;
    }

    if (value == NULL)
    {
        return INVALID_STRING;
    }

    if (STRING_SIZE <= strlen(value))
    {
        return STRING_TOO_LONG;
    }

    strcpy(key->key_value, value);
    return OK;
}

RegError publishKey(RegKey key)
{
    int i;
    if (key == NULL)
    {
        return INVALID_KEY;
    }

    for (i = 0; i < MAX_KEYS; i++)
    {
        if (key_list[i] == NULL)
        {
            key_list[i] = key;
            return OK;
        }
    }

    return CANNOT_ADD_KEY;
}