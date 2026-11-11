
/* ==== __break @ 00494fef ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00494fef-00494fef
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


