
/* ==== __break @ 00448edc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00448edc-00448edc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


