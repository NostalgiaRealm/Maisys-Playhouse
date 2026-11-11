
/* ==== __break @ 00472fc9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00472fc9-00472fc9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


