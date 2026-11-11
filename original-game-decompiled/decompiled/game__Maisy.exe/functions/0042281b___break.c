
/* ==== __break @ 0042281b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042281b-0042281b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


