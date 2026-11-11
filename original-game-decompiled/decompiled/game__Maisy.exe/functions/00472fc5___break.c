
/* ==== __break @ 00472fc5 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00472fc5-00472fc5
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


