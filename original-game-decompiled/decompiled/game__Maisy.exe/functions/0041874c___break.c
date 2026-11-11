
/* ==== __break @ 0041874c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041874c-0041874c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


