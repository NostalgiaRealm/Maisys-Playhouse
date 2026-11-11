
/* ==== __break @ 14010a6b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14010a6b-14010a6b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


