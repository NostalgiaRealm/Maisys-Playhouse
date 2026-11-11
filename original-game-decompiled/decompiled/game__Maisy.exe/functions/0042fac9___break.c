
/* ==== __break @ 0042fac9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042fac9-0042fac9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


