
/* ==== __break @ 00442c24 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00442c24-00442c24
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


