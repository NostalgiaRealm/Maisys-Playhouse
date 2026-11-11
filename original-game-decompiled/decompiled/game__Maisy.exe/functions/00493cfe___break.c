
/* ==== __break @ 00493cfe ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00493cfe-00493cfe
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


