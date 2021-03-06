//
// Why this file?
//
// We all need to add our personal SSID/password to each ESP project but we
// do not want that information pushed to Github. This file solves that
// problem.
//
// First tell git to ignore changes to this file:
//
// git update-index --assume-unchanged src/config.h
//
// Then, enter your SSID and passphrase below and it will never be committed
// to Github.
//
// Change password on project basis? Copy the default version this file to your
// project directory, redo the instructions and you have separate wifi settings
// for that project.
//
// For reference, see
//   https://www.kernel.org/pub/software/scm/git/docs/git-update-index.html
//

#error "You need to enter your wifi credentials in this file and follow the instructions here to keep the password safe from Github commits."

#ifndef __CONFIG_H__
#define __CONFIG_H__

#define WIFI_SSID "mywifissid"
#define WIFI_PWD "my secret password"

#define WUNDERGRROUND_API_KEY "wunderground api key"

#endif // __CONFIG_H__
