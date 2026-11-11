
/* ==== __break @ 00425bd8 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00425bd8-00425bd8
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


