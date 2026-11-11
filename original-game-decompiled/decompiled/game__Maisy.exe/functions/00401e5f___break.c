
/* ==== __break @ 00401e5f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00401e5f-00401e5f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


