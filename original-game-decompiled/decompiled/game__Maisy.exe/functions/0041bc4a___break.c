
/* ==== __break @ 0041bc4a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041bc4a-0041bc4a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


