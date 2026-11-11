
/* ==== __break @ 00470a3f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00470a3f-00470a3f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


