
/* ==== __break @ 0041bc4f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041bc4f-0041bc4f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


