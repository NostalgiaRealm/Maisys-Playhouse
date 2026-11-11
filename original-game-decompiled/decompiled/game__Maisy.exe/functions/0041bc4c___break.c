
/* ==== __break @ 0041bc4c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041bc4c-0041bc4c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


