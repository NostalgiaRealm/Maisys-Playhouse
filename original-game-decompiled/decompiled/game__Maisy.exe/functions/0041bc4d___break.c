
/* ==== __break @ 0041bc4d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041bc4d-0041bc4d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


