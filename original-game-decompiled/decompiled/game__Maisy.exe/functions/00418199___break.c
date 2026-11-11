
/* ==== __break @ 00418199 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00418199-00418199
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


