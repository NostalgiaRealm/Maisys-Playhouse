
/* ==== __break @ 0042024c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042024c-0042024c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


