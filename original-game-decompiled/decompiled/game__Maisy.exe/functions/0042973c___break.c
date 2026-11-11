
/* ==== __break @ 0042973c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042973c-0042973c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


