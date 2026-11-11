
/* ==== __break @ 004794ac ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004794ac-004794ac
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


