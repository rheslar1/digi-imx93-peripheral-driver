#include <stdio.h>
#include <stddef.h>

typedef struct {
  const char *title;
  const char *summary;
  const char *evidence_target;
  const char *tags[8];
  size_t tag_count;
} project_profile_t;

static const project_profile_t profile = {
  "Digi ConnectCore i.MX93 Peripheral Driver",
  "Hardware peripheral driver for the Digi ConnectCore i.MX93 EVK, covering an on-chip SPI or PWM block, application layer, and test boundary.",
  "Board-specific bring-up, clean driver/application separation, register-level reasoning, and testable hardware abstractions.",
  {
  "i.MX93",
  "Digi ConnectCore",
  "SPI/PWM",
  "Device tree",
  "Linux driver",
  "Unit tests"
  },
  6u
};

int main(void) {
  printf("%s\n", profile.title);
  printf("Summary: %s\n", profile.summary);
  printf("Evidence target: %s\n", profile.evidence_target);
  printf("Stack:");

  for (size_t index = 0; index < profile.tag_count; ++index) {
    printf(" %s%s", profile.tags[index], index + 1u == profile.tag_count ? "" : ",");
  }

  printf("\n");
  return 0;
}
