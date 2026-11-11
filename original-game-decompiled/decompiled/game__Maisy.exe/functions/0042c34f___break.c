
/* ==== __break @ 0042c34f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042c34f-0042c34f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


