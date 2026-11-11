
/* ==== __break @ 00401f9f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00401f9f-00401f9f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


