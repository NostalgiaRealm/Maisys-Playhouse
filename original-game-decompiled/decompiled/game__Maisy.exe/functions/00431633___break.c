
/* ==== __break @ 00431633 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00431633-00431633
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


