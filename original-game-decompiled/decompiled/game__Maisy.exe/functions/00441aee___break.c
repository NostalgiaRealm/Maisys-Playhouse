
/* ==== __break @ 00441aee ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00441aee-00441aee
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


